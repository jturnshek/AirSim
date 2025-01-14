﻿// A bridge between ROS2 and AirSim

#include "stdafx.h"

#include <chrono>
#include <iostream>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
#include <tchar.h>
#include <Pdh.h>

#include "opencv2/opencv.hpp"

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/accel.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/quaternion.hpp"
#include "geometry_msgs/msg/quaternion_stamped.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "geometry_msgs/msg/vector3.hpp"
#include "geometry_msgs/msg/vector3_stamped.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "nav_msgs/msg/path.hpp"
#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/header.hpp"
#include "std_msgs/msg/string.hpp"
#include "std_msgs/msg/float32.hpp"
#include "sensor_msgs/msg/battery_state.hpp"
#include "sensor_msgs/msg/compressed_image.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include "sensor_msgs/msg/image.hpp"
#include "sensor_msgs/msg/nav_sat_fix.hpp"

#include "vehicles/multirotor/api/MultirotorRpcLibClient.hpp"

using std::placeholders::_1;

using namespace std::chrono;
using namespace std::chrono_literals;

typedef ImageCaptureBase::ImageRequest ImageRequest;
typedef ImageCaptureBase::ImageResponse ImageResponse;
typedef ImageCaptureBase::ImageType ImageType;

msr::airlib::MultirotorRpcLibClient client;

static PDH_HQUERY cpuQuery;
static PDH_HCOUNTER cpuTotal;

class ROS2AirSim : public rclcpp::Node
{
public:

	ROS2AirSim() : Node("AirSim"), bridgeCount_(0), stateCount_(0)
	{
		batteryPercentage_ = 1.0;
		startTime_ = high_resolution_clock::now();
		publishRate_ = 0;
		publishCount_ = 0;

		PdhOpenQuery(NULL, NULL, &cpuQuery);
		PdhAddEnglishCounter(cpuQuery, L"\\Processor(_Total)\\% Processor Time", NULL, &cpuTotal);
		PdhCollectQueryData(cpuQuery);

		// Create the bridge state publishers
		bridgeTimer_ = this->create_wall_timer(1000ms, std::bind(&ROS2AirSim::bridge_callback, this));
		bridgeConnectedPublisher_ = this->create_publisher<std_msgs::msg::Bool>("/abcd1234whatever/airsim/drone/bridge/connected");
		bridgePingPublisher_ = this->create_publisher<std_msgs::msg::String>("/abcd1234whatever/airsim/drone/bridge/ping");

		// Create the drone state publishers
		stateTimer_ = this->create_wall_timer(100ms, std::bind(&ROS2AirSim::state_callback, this));
		connectedPublisher_ = this->create_publisher<std_msgs::msg::Bool>("/abcd1234whatever/airsim/drone/simulator/connected");
		pingPublisher_ = this->create_publisher<std_msgs::msg::String>("/abcd1234whatever/airsim/drone/simulator/ping");
		accelPublisher_ = this->create_publisher<geometry_msgs::msg::Accel>("/abcd1234whatever/airsim/drone/state/accel");
		fixPublisher_ = this->create_publisher<sensor_msgs::msg::NavSatFix>("/abcd1234whatever/airsim/drone/state/gps");
		odomPublisher_ = this->create_publisher<nav_msgs::msg::Odometry>("/abcd1234whatever/airsim/drone/state/odometry");
		imuPublisher_ = this->create_publisher<sensor_msgs::msg::Imu>("/abcd1234whatever/airsim/drone/state/imu");
		landedPublisher_ = this->create_publisher<std_msgs::msg::Bool>("/abcd1234whatever/airsim/drone/state/landed");
		collidedPublisher_ = this->create_publisher<std_msgs::msg::Bool>("/abcd1234whatever/airsim/drone/state/collided");
		batteryPublisher_ = this->create_publisher<sensor_msgs::msg::BatteryState>("/abcd1234whatever/airsim/drone/state/battery");

		// Create the diagnostics publishers
		totalMemoryPublisher_ = this->create_publisher<std_msgs::msg::Float32>("/abcd1234whatever/formation_robot_diagnostics/gb_total_memory");
		hostnamectlPublisher_ = this->create_publisher<std_msgs::msg::String>("/abcd1234whatever/formation_robot_diagnostics/hostnamectl");
		isOnlinePublisher_ = this->create_publisher<std_msgs::msg::Bool>("/abcd1234whatever/formation_robot_diagnostics/is_online");
		percentCpuUsagePublisher_ = this->create_publisher<std_msgs::msg::Float32>("/abcd1234whatever/formation_robot_diagnostics/percent_cpu_usage");
		percentMemoryUsagePublisher_ = this->create_publisher<std_msgs::msg::Float32>("/abcd1234whatever/formation_robot_diagnostics/percent_memory_usage");

		RCLCPP_INFO(this->get_logger(), "Publishers initialized.");
	}

private:

	time_point<steady_clock> startTime_;
	float publishRate_;
	int publishCount_;

	// Bridge
	size_t bridgeCount_;
	rclcpp::TimerBase::SharedPtr bridgeTimer_;
	rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr bridgeConnectedPublisher_;
	rclcpp::Publisher<std_msgs::msg::String>::SharedPtr bridgePingPublisher_;
	void bridge_callback()
	{
		bridgeCount_++;

		// Publish whether the bridge is connected or not
		auto bridgeConnectedMessage = std_msgs::msg::Bool();
		bridgeConnectedMessage.data = true;
		bridgeConnectedPublisher_->publish(bridgeConnectedMessage);

		// Publish a ping from the bridge
		auto bridgePingMessage = std_msgs::msg::String();
		bridgePingMessage.data = "ping from bridge - " + std::to_string(bridgeCount_);
		bridgePingPublisher_->publish(bridgePingMessage);
	}

	// State
	size_t stateCount_;
	float batteryPercentage_;
	rclcpp::TimerBase::SharedPtr stateTimer_;
	rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr connectedPublisher_;
	rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pingPublisher_;
	rclcpp::Publisher<geometry_msgs::msg::Accel>::SharedPtr accelPublisher_;
	rclcpp::Publisher<sensor_msgs::msg::NavSatFix>::SharedPtr fixPublisher_;
	rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odomPublisher_;
	rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr imuPublisher_;
	rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr landedPublisher_;
	rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr collidedPublisher_;
	rclcpp::Publisher<sensor_msgs::msg::BatteryState>::SharedPtr batteryPublisher_;
	rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr totalMemoryPublisher_;
	rclcpp::Publisher<std_msgs::msg::String>::SharedPtr hostnamectlPublisher_;
	rclcpp::Publisher<std_msgs::msg::Bool>::SharedPtr isOnlinePublisher_;
	rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr percentCpuUsagePublisher_;
	rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr percentMemoryUsagePublisher_;
	void state_callback()
	{
		stateCount_++;
		//time_point<steady_clock> tickStart = high_resolution_clock::now();

		// Publish whether the drone is connected or not
		auto connectedMessage = std_msgs::msg::Bool();
		connectedMessage.data = client.ping();
		connectedPublisher_->publish(connectedMessage);

		// Publish a ping from AirSim
		auto pingMessage = std_msgs::msg::String();
		if (client.ping()) {
			pingMessage.data = "Ping from drone: " + std::to_string(stateCount_);
		}
		else {
			pingMessage.data = "Failed to ping drone: " + std::to_string(stateCount_);
		}
		pingPublisher_->publish(pingMessage);

		// Publish the multirotor state
		auto state = client.getMultirotorState();
		
		auto accelMessage = geometry_msgs::msg::Accel();
		accelMessage.linear.x = state.kinematics_estimated.accelerations.linear.x();
		accelMessage.linear.y = state.kinematics_estimated.accelerations.linear.y();
		accelMessage.linear.z = state.kinematics_estimated.accelerations.linear.z();
		accelMessage.angular.x = state.kinematics_estimated.accelerations.angular.x();
		accelMessage.angular.y = state.kinematics_estimated.accelerations.angular.y();
		accelMessage.angular.z = state.kinematics_estimated.accelerations.angular.z();
		accelPublisher_->publish(accelMessage);
		
		auto fixMessage = sensor_msgs::msg::NavSatFix();
		fixMessage.latitude = state.gps_location.latitude;
		fixMessage.longitude = state.gps_location.longitude;
		fixMessage.altitude = state.gps_location.altitude;
		fixPublisher_->publish(fixMessage);
		
		auto odomMessage = nav_msgs::msg::Odometry();
		odomMessage.pose.pose.position.x = state.kinematics_estimated.pose.position.x();
		odomMessage.pose.pose.position.y = state.kinematics_estimated.pose.position.y();
		odomMessage.pose.pose.position.z = state.kinematics_estimated.pose.position.z();
		odomMessage.pose.pose.orientation.x = state.kinematics_estimated.pose.orientation.x();
		odomMessage.pose.pose.orientation.y = state.kinematics_estimated.pose.orientation.y();
		odomMessage.pose.pose.orientation.z = state.kinematics_estimated.pose.orientation.z();
		odomMessage.pose.pose.orientation.w = state.kinematics_estimated.pose.orientation.w();
		odomMessage.twist.twist.linear.x = state.kinematics_estimated.twist.linear.x();
		odomMessage.twist.twist.linear.y = state.kinematics_estimated.twist.linear.y();
		odomMessage.twist.twist.linear.z = state.kinematics_estimated.twist.linear.z();
		odomMessage.twist.twist.angular.x = state.kinematics_estimated.twist.angular.x();
		odomMessage.twist.twist.angular.y = state.kinematics_estimated.twist.angular.y();
		odomMessage.twist.twist.angular.z = state.kinematics_estimated.twist.angular.z();
		odomPublisher_->publish(odomMessage);

		auto imuMessage = sensor_msgs::msg::Imu();
		imuMessage.linear_acceleration.x = state.kinematics_estimated.accelerations.linear.x();
		imuMessage.linear_acceleration.y = state.kinematics_estimated.accelerations.linear.y();
		imuMessage.linear_acceleration.z = state.kinematics_estimated.accelerations.linear.z();
		imuMessage.angular_velocity.x = state.kinematics_estimated.twist.angular.x();
		imuMessage.angular_velocity.y = state.kinematics_estimated.twist.angular.y();
		imuMessage.angular_velocity.z = state.kinematics_estimated.twist.angular.z();
		imuMessage.orientation.x = state.getOrientation().x();
		imuMessage.orientation.y = state.getOrientation().y();
		imuMessage.orientation.z = state.getOrientation().z();
		imuMessage.orientation.w = state.getOrientation().w();
		imuPublisher_->publish(imuMessage);

		auto landedMessage = std_msgs::msg::Bool();
		if (state.landed_state == LandedState::Landed) {
			landedMessage.data = true;
		}
		else {
			landedMessage.data = false;
		}
		landedPublisher_->publish(landedMessage);

		// Burn down the battery over 20 minutes and then reset it
		batteryPercentage_ = batteryPercentage_ - (1.0f / 12000.0f);
		if (batteryPercentage_ < 0.0f) {
			batteryPercentage_ = 1.0f;
		}

		auto batteryMessage = sensor_msgs::msg::BatteryState();
		batteryMessage.percentage = batteryPercentage_;
		batteryMessage.voltage = 12.6f;
		batteryMessage.present = true;
		batteryPublisher_->publish(batteryMessage);

		// Publish collision info - TODO: this breaks on .simGetCollisionInfo()
		/*
		auto collision_info = client.simGetCollisionInfo("multirotor");
		auto collidedMessage = std_msgs::msg::Bool();
		collidedMessage.data = collision_info.has_collided;
		collidedPublisher_->publish(collidedMessage);
		*/

		// Publish the total system memory available (in GB)
		auto totalMemoryMessage = std_msgs::msg::Float32();
		MEMORYSTATUSEX memInfo;
		memInfo.dwLength = sizeof(MEMORYSTATUSEX);
		GlobalMemoryStatusEx(&memInfo);
		float totalMemory = (float)memInfo.ullTotalPhys / 1073741824;
		totalMemoryMessage.data = totalMemory;
		totalMemoryPublisher_->publish(totalMemoryMessage);

		// Publish a fake hostnamectl message
		auto hostnamectlMessage = std_msgs::msg::String();
		hostnamectlMessage.data = "";
		hostnamectlMessage.data.append("    Static hostname: airsim-host\n");
		hostnamectlMessage.data.append("	Icon name: stack-pc\n");
		hostnamectlMessage.data.append("    Chassis: pc\n");
		hostnamectlMessage.data.append("	Machine ID : 2efb99e92fa1c516bac6f704f856abed\n");
		hostnamectlMessage.data.append("	Boot ID : 6551a017a45c4666a776a35fb54d10e7\n");
		hostnamectlMessage.data.append("	Virtualization: none\n");
		hostnamectlMessage.data.append("	Operating System : Windows 10 Professional\n");
		hostnamectlMessage.data.append("	Kernel: Windows 10\n");
		hostnamectlMessage.data.append("	Architecture: x86 - 64\n");
		hostnamectlPublisher_->publish(hostnamectlMessage);
		
		// Publish true when the system is online
		auto isOnlineMessage = std_msgs::msg::Bool();
		isOnlineMessage.data = true;
		isOnlinePublisher_->publish(isOnlineMessage);

		// Publish the percentage of cpu used
		auto percentCpuUsageMessage = std_msgs::msg::Float32();
		PDH_FMT_COUNTERVALUE counterVal;
		PdhCollectQueryData(cpuQuery);
		PdhGetFormattedCounterValue(cpuTotal, PDH_FMT_DOUBLE, NULL, &counterVal);
		percentCpuUsageMessage.data = (float)counterVal.doubleValue;
		percentCpuUsagePublisher_->publish(percentCpuUsageMessage);

		// publish the percentage of memory used
		auto percentMemoryUsageMessage = std_msgs::msg::Float32();
		float physMemUsed = ((float)memInfo.ullTotalPhys / 1073741824 - (float)memInfo.ullAvailPhys / 1073741824);
		percentMemoryUsageMessage.data = physMemUsed / totalMemory;
		percentMemoryUsagePublisher_->publish(percentMemoryUsageMessage);

		/*
		duration<double> tickEnd = duration_cast<duration<double>>(high_resolution_clock::now() - tickStart);
		RCLCPP_INFO(
			this->get_logger(),
			"#%s: Publishing state at time %s took %s",
			std::to_string(stateCount_++),
			std::to_string(system_clock::to_time_t(system_clock::now())),
			std::to_string(tickEnd.count())
		);
		*/
		
		publishCount_++;
		if (publishCount_ % 50 == 0) {
			duration<double> print_span = duration_cast<duration<double>>(high_resolution_clock::now() - startTime_);
			double hz = (double)publishCount_ / print_span.count();

			RCLCPP_INFO(this->get_logger(), "state publishing hz: %s", std::to_string(hz));

			// Reset the clock
			startTime_ = high_resolution_clock::now();
			publishCount_ = 0;
		}
	}
};

void shutdown_handler(sig_atomic_t s) {
	rclcpp::shutdown();

	client.armDisarm(false);
	client.enableApiControl(false);

	exit(1);
}

int main(int argc, char * argv[])
{
	signal(SIGINT, shutdown_handler);

	// Set up the AirSim API
	client.confirmConnection();
	client.enableApiControl(true);
	client.armDisarm(true);

	// Set up the ROS2 API
	rclcpp::init(argc, argv);

	rclcpp::executors::MultiThreadedExecutor executor(rclcpp::executor::create_default_executor_arguments(), 3, false);
	std::cout << "threads: " << executor.get_number_of_threads() << "\n";
		
	auto node = std::make_shared<ROS2AirSim>();
	executor.add_node(node);

	// worried it will eventually stop for no reason
	executor.spin();

	shutdown_handler(NULL);

	return 0;
}
