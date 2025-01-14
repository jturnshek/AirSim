// ROS2DownCamera.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <chrono>
#include <iostream>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/compressed_image.hpp"
#include "vehicles/multirotor/api/MultirotorRpcLibClient.hpp"

using namespace std::chrono;
using namespace std::chrono_literals;

typedef ImageCaptureBase::ImageRequest ImageRequest;
typedef ImageCaptureBase::ImageResponse ImageResponse;
typedef ImageCaptureBase::ImageType ImageType;

msr::airlib::MultirotorRpcLibClient client;

class ROS2DownCamera : public rclcpp::Node
{
public:

	ROS2DownCamera() : Node("AirSimDownCamera")
	{
		startTime_ = high_resolution_clock::now();
		publishRate_ = 0;
		publishCount_ = 0;

		// Create the camera publishers
		downCameraTimer_ = this->create_wall_timer(50ms, std::bind(&ROS2DownCamera::down_camera_callback, this));
		downColorPublisher_ = this->create_publisher<sensor_msgs::msg::CompressedImage>("/abcd1234whatever/airsim/drone/camera/down/color/image_raw/compressed");
		
		RCLCPP_INFO(this->get_logger(), "Down camera initialized.");
	}

private:

	time_point<steady_clock> startTime_;
	float publishRate_;
	int publishCount_;

	rclcpp::TimerBase::SharedPtr downCameraTimer_;
	rclcpp::Publisher<sensor_msgs::msg::CompressedImage>::SharedPtr downColorPublisher_;
	void down_camera_callback()
	{
		//time_point<steady_clock> tickStart = high_resolution_clock::now();

		vector<ImageRequest> imageRequests = {
			ImageRequest("bottom_center", ImageType::Scene, false, true) // down color
		};

		const vector<ImageResponse>& imageResponses = client.simGetImages(imageRequests);

		auto downColorMessage = sensor_msgs::msg::CompressedImage();
		downColorMessage.header.frame_id = "down_color";
		downColorMessage.header.stamp.sec = (int32_t)system_clock::to_time_t(system_clock::now());
		downColorMessage.format = "png";
		downColorMessage.data = imageResponses[0].image_data_uint8;
		downColorPublisher_->publish(downColorMessage);

		/*
		duration<double> tickEnd = duration_cast<duration<double>>(high_resolution_clock::now() - tickStart);
		RCLCPP_INFO(
			this->get_logger(),
			"down  - publishing %s images at time %s took %s",
			std::to_string(imageResponses.size()),
			std::to_string(system_clock::to_time_t(system_clock::now())),
			std::to_string(tickEnd.count())
		);
		*/

		publishCount_++;
		if (publishCount_ % 50 == 0) {
			duration<double> print_span = duration_cast<duration<double>>(high_resolution_clock::now() - startTime_);
			double hz = (double)publishCount_ / print_span.count();

			RCLCPP_INFO(this->get_logger(), "down camera hz: %s", std::to_string(hz));

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

	auto node = std::make_shared<ROS2DownCamera>();
	executor.add_node(node);

	// worried it will eventually stop for no reason
	executor.spin();

	shutdown_handler(NULL);

	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
