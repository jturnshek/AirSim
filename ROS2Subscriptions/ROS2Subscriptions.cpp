// ROS2Subscriptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <chrono>
#include <iostream>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "geometry_msgs/msg/vector3.hpp"
#include "nav_msgs/msg/path.hpp"
#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/float32.hpp"
#include "std_msgs/msg/string.hpp"

#include "vehicles/multirotor/api/MultirotorRpcLibClient.hpp"

using std::placeholders::_1;

using namespace std::chrono;
using namespace std::chrono_literals;

msr::airlib::MultirotorRpcLibClient client;

class ROS2Subscribers : public rclcpp::Node
{
public:
	ROS2Subscribers() : Node("AirSimSubscriptions")
	{
		//These options are currently unused, but this is the default
		rmw_qos_profile_t subscriptionOptions;
		subscriptionOptions.depth = 1;
		subscriptionOptions.durability = RMW_QOS_POLICY_DURABILITY_VOLATILE;
		subscriptionOptions.reliability = RMW_QOS_POLICY_RELIABILITY_RELIABLE;
		subscriptionOptions.history = RMW_QOS_POLICY_HISTORY_KEEP_LAST;

		// Create the action subscriptions
		takeoffSubscription_ = this->create_subscription<std_msgs::msg::Bool>("/abcd1234whatever/airsim/drone/actions/takeoff", std::bind(&ROS2Subscribers::takeoff_callback, this, _1));
		landSubscription_ = this->create_subscription<std_msgs::msg::Bool>("/abcd1234whatever/airsim/drone/actions/land", std::bind(&ROS2Subscribers::land_callback, this, _1));
		goHomeSubscription_ = this->create_subscription<std_msgs::msg::Bool>("/abcd1234whatever/airsim/drone/actions/go_home", std::bind(&ROS2Subscribers::go_home_callback, this, _1));
		hoverSubscription_ = this->create_subscription<std_msgs::msg::Bool>("/abcd1234whatever/airsim/drone/actions/hover", std::bind(&ROS2Subscribers::hover_callback, this, _1));
		flyAroundSubscription_ = this->create_subscription<std_msgs::msg::Bool>("/abcd1234whatever/airsim/drone/actions/fly_around", std::bind(&ROS2Subscribers::fly_around_callback, this, _1));

		// Create the control subscriptions
		moveSubscription_ = this->create_subscription<geometry_msgs::msg::Twist>("/abcd1234whatever/airsim/drone/controls/move_by_velocity", std::bind(&ROS2Subscribers::move_callback, this, _1));
		rotateSubscription_ = this->create_subscription<geometry_msgs::msg::Twist>("/abcd1234whatever/airsim/drone/controls/rotate_by_velocity", std::bind(&ROS2Subscribers::rotate_callback, this, _1));
		pathSubscription_ = this->create_subscription<nav_msgs::msg::Path>("/abcd1234whatever/airsim/drone/controls/move_by_path", std::bind(&ROS2Subscribers::path_callback, this, _1));

		pingSubscription_ = this->create_subscription<std_msgs::msg::String>("/abcd1234whatever/airsim/drone/bridge/ping", std::bind(&ROS2Subscribers::ping_callback, this, _1));
		resetSubscription_ = this->create_subscription<std_msgs::msg::Bool>("/abcd1234whatever/airsim/drone/simulator/reset", std::bind(&ROS2Subscribers::reset_callback, this, _1));

		// Create the ping subscription and response publisher
		inPingSubscription_ = this->create_subscription<std_msgs::msg::Header>("/abcd1234whatever/formation_robot_diagnostics/in_ping", std::bind(&ROS2Subscribers::in_ping_callback, this, _1));
		outPingPublisher_ = this->create_publisher<std_msgs::msg::Header>("/abcd1234whatever/formation_robot_diagnostics/out_ping");

		RCLCPP_INFO(this->get_logger(), "Bridge initialized.");
	}

private:

	// Ping in and out
	rclcpp::Publisher <std_msgs::msg::Header>::SharedPtr outPingPublisher_;
	rclcpp::Subscription<std_msgs::msg::Header>::SharedPtr inPingSubscription_;
	void in_ping_callback(const std_msgs::msg::Header::SharedPtr msg) {
		outPingPublisher_->publish(msg);
	}

	// Actions
	rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr takeoffSubscription_;
	void takeoff_callback(const std_msgs::msg::Bool::SharedPtr msg) {
		RCLCPP_INFO(this->get_logger(), "-> takeoff called");

		client.takeoffAsync();
	}

	rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr landSubscription_;
	void land_callback(const std_msgs::msg::Bool::SharedPtr msg) {
		RCLCPP_INFO(this->get_logger(), "-> land called");

		client.landAsync();
	}

	rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr goHomeSubscription_;
	void go_home_callback(const std_msgs::msg::Bool::SharedPtr msg) {
		RCLCPP_INFO(this->get_logger(), "-> go_home called");

		client.goHomeAsync();
	}

	rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr hoverSubscription_;
	void hover_callback(const std_msgs::msg::Bool::SharedPtr msg) {
		RCLCPP_INFO(this->get_logger(), "-> hover called");

		client.hoverAsync();
	}

	rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr flyAroundSubscription_;
	void fly_around_callback(const std_msgs::msg::Bool::SharedPtr msg) {
		RCLCPP_INFO(this->get_logger(), "-> fly around called");

		// moveByVelocityZ is an offboard operation, so we need to set offboard mode.
		auto position = client.getMultirotorState().getPosition();
		float z = position.z(); // current position (NED coordinate system).  
		const float speed = 3.0f;
		const float size = 10.0f;
		const float duration = size / speed;
		DrivetrainType driveTrain = DrivetrainType::ForwardOnly;
		YawMode yaw_mode(true, 0);

		// Fly the box
		client.moveByVelocityAsync(0, 0, -speed, duration / 2);
		std::this_thread::sleep_for(std::chrono::duration<double>(duration / 2));

		client.moveByVelocityZAsync(0, -speed, z, duration, driveTrain, yaw_mode);
		std::this_thread::sleep_for(std::chrono::duration<double>(duration));

		client.moveByVelocityZAsync(-speed, 0, z, duration, driveTrain, yaw_mode);
		std::this_thread::sleep_for(std::chrono::duration<double>(duration));

		client.moveByVelocityZAsync(0, speed, z, duration, driveTrain, yaw_mode);
		std::this_thread::sleep_for(std::chrono::duration<double>(duration));

		client.moveByVelocityZAsync(speed, 0, z, duration, driveTrain, yaw_mode);
		std::this_thread::sleep_for(std::chrono::duration<double>(duration));
	}

	// Controls
	rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr moveSubscription_;
	void move_callback(const geometry_msgs::msg::Twist::SharedPtr msg) {
		float linear_factor = 2.5f;
		float angular_factor = 20.0f;

		std::cout << "-> move_by_velocity -\n";
		std::cout << "    -lx: " << (float)msg->linear.x << "\n";
		std::cout << "    -ly: " << (float)msg->linear.y << "\n";
		std::cout << "    -lz: " << (float)msg->linear.z << "\n";
		std::cout << "    -ax: " << (float)msg->angular.x << "\n";
		std::cout << "    -ay: " << (float)msg->angular.y << "\n";
		std::cout << "    -az: " << (float)msg->angular.z << "\n";
		std::cout << "\n";

		if (msg->angular.z > 0.0001 || msg->angular.z < -0.0001) {
			client.rotateByYawRateAsync((float)msg->angular.z * angular_factor, 0.5f);
		}
		else {
			float current_lx = (float)msg->linear.x;
			float current_ly = (float)msg->linear.y;

			float roll;
			float pitch;
			float yaw;

			VectorMath::toEulerianAngle(client.simGetVehiclePose().orientation, roll, pitch, yaw);
			yaw = yaw - std::_Pi / 2.0;

			float new_lx = current_lx * std::cosf(yaw) - current_ly * std::sinf(yaw);
			float new_ly = current_lx * std::sinf(yaw) + current_ly * std::cosf(yaw);

			client.moveByVelocityAsync(
				new_lx * linear_factor,
				new_ly * linear_factor,
				(float)msg->linear.z * linear_factor,
				0.5f
			);
		}
	}

	rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr rotateSubscription_;
	void rotate_callback(const std_msgs::msg::Float32::SharedPtr msg) {
		RCLCPP_INFO(this->get_logger(), "-> rotate_by_velocity called");

		client.rotateByYawRateAsync(msg->data, 0.5);
	}

	rclcpp::Subscription<nav_msgs::msg::Path>::SharedPtr pathSubscription_;
	void path_callback(const nav_msgs::msg::Path::SharedPtr msg) {
		RCLCPP_INFO(this->get_logger(), "-> move_by_path called");

		
		// take the given ros path, convert it to an airlib path
		vector<Vector3r> path;
		for (int i = 0; i < msg->poses.size(); i++) {
			float x = msg->poses[i].pose.position.x;
			float y = msg->poses[i].pose.position.y;
			float z = msg->poses[i].pose.position.z;
			path.push_back(Vector3r(x, y, z));
		}
		client.moveOnPathAsync(path, 2.0f);
	}

	rclcpp::Subscription<std_msgs::msg::String>::SharedPtr pingSubscription_;
	void ping_callback(const std_msgs::msg::String::SharedPtr msg) {
		std::cout << "Got message: " << msg->data << "\n";
	}

	rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr resetSubscription_;
	void reset_callback(const std_msgs::msg::Bool::SharedPtr msg) {
		std::cout << "<- reset called";

		client.reset();
		client.confirmConnection();
		client.enableApiControl(true);
		client.armDisarm(true);
	}
};

void shutdown_handler(sig_atomic_t s) {
	rclcpp::shutdown();

	client.armDisarm(false);
	client.enableApiControl(false);

	exit(1);
}

int main(int argc, char* argv[])
{
	signal(SIGINT, shutdown_handler);

    std::cout << "Starting ROS2 Subscribers bridge for AirSim...\n"; 

	// Set up the AirSim API
	client.confirmConnection();
	client.enableApiControl(true);
	client.armDisarm(true);

	// Set up the ROS2 API
	rclcpp::init(argc, argv);

	rclcpp::executors::MultiThreadedExecutor executor(rclcpp::executor::create_default_executor_arguments(), 3, false);
	std::cout << "threads: " << executor.get_number_of_threads() << "\n";

	auto node = std::make_shared<ROS2Subscribers>();
	executor.add_node(node);

	executor.spin();

	shutdown_handler(NULL);

	return 0;
}