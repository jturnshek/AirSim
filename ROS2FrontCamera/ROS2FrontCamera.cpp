// ROS2FrontCamera.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <chrono>
#include <iostream>
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

#include "opencv2/opencv.hpp"
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/image.hpp"	
#include "sensor_msgs/msg/compressed_image.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "vehicles/multirotor/api/MultirotorRpcLibClient.hpp"

using namespace std::chrono;
using namespace std::chrono_literals;

typedef ImageCaptureBase::ImageRequest ImageRequest;
typedef ImageCaptureBase::ImageResponse ImageResponse;
typedef ImageCaptureBase::ImageType ImageType;

msr::airlib::MultirotorRpcLibClient client;

class ROS2FrontCamera : public rclcpp::Node
{
public:

	ROS2FrontCamera() : Node("AirSimFrontCamera")
	{
		startTime_ = high_resolution_clock::now();
		publishRate_ = 0;
		publishCount_ = 0;

		// Create the camera publishers
		cameraTimer_ = this->create_wall_timer(50ms, std::bind(&ROS2FrontCamera::camera_callback, this));
		frontCameraPosePublisher_ = this->create_publisher<geometry_msgs::msg::Pose>("/abcd1234whatever/airsim/drone/camera/front/pose");
		frontColorPublisher_ = this->create_publisher<sensor_msgs::msg::CompressedImage>("/abcd1234whatever/airsim/drone/camera/front/color/image_raw/compressed");
		//frontDepthPublisher_ = this->create_publisher<sensor_msgs::msg::CompressedImage>("/abcd1234whatever/airsim/drone/camera/front/depth/image_raw/compressed");
		//frontRawDepthPublisher_ = this->create_publisher<sensor_msgs::msg::Image>("/abcd1234whatever/airsim/drone/camera/front/depth/image_raw");

		RCLCPP_INFO(this->get_logger(), "Front Camera initialized.");
	}

private:

	time_point<steady_clock> startTime_;
	float publishRate_;
	int publishCount_;

	// Camera
	float precision_coefficient_ = 10000.0;
	rclcpp::TimerBase::SharedPtr cameraTimer_;
	rclcpp::Publisher<geometry_msgs::msg::Pose>::SharedPtr frontCameraPosePublisher_;
	rclcpp::Publisher<sensor_msgs::msg::CompressedImage>::SharedPtr frontColorPublisher_;
	//rclcpp::Publisher<sensor_msgs::msg::CompressedImage>::SharedPtr frontDepthPublisher_;
	//rclcpp::Publisher<sensor_msgs::msg::Image>::SharedPtr frontRawDepthPublisher_;
	void camera_callback()
	{
		//time_point<steady_clock> tickStart = high_resolution_clock::now();

		//time_point<steady_clock> t_start = high_resolution_clock::now();

		vector<ImageRequest> imageRequests = {
			ImageRequest("front_center", ImageType::Scene, false, true)
		};

		// Get both depth and color images
		/*
		vector<ImageRequest> imageRequests = {
			ImageRequest("front_center", ImageType::Scene, false, true),
			ImageRequest("front_center", ImageType::DepthPerspective, true, false)
		};
		*/

		const vector<ImageResponse>& imageResponses = client.simGetImages(imageRequests);
		auto front_color_image = imageResponses[0];
		//auto front_depth_image = imageResponses[1];

		//duration<double> t_end = duration_cast<duration<double>>(high_resolution_clock::now() - t_start);
		//RCLCPP_INFO(this->get_logger(), "-- got front images in %s seconds", std::to_string(t_end.count()));

		// Publish the pose of the front camera
		auto frontCameraPoseMessage = geometry_msgs::msg::Pose();
		frontCameraPoseMessage.position.x = front_color_image.camera_position.x();
		frontCameraPoseMessage.position.y = front_color_image.camera_position.y();
		frontCameraPoseMessage.position.z = front_color_image.camera_position.z();
		frontCameraPoseMessage.orientation.x = front_color_image.camera_orientation.x();
		frontCameraPoseMessage.orientation.y = front_color_image.camera_orientation.y();
		frontCameraPoseMessage.orientation.z = front_color_image.camera_orientation.z();
		frontCameraPoseMessage.orientation.w = front_color_image.camera_orientation.w();
		frontCameraPosePublisher_->publish(frontCameraPoseMessage);

		//t_start = high_resolution_clock::now();
		auto frontColorMessage = sensor_msgs::msg::CompressedImage();
		frontColorMessage.header.frame_id = "front_color";
		frontColorMessage.header.stamp.sec = (int32_t)system_clock::to_time_t(system_clock::now());
		frontColorMessage.format = "png";
		frontColorMessage.data = front_color_image.image_data_uint8;
		frontColorPublisher_->publish(frontColorMessage);

		//t_end = duration_cast<duration<double>>(high_resolution_clock::now() - t_start);
		//RCLCPP_INFO(this->get_logger(), "-- published front color image in %s seconds", std::to_string(t_end.count()));

		/* 
		//t_start = high_resolution_clock::now();
		auto frontDepthMessage = sensor_msgs::msg::CompressedImage();
		frontDepthMessage.header.frame_id = "front_depth";
		frontDepthMessage.header.stamp.sec = (int32_t)system_clock::to_time_t(system_clock::now());
		frontDepthMessage.format = "png";

		// Convert float values to uint32_t and add to a vector
		vector<uint32_t> uncompressedDepth(front_depth_image.image_data_float.size());
		for (int i = 0; i < front_depth_image.image_data_float.size(); i++) {
			uncompressedDepth[i] = static_cast<uint32_t>(front_depth_image.image_data_float[i] * precision_coefficient_);
		}

		// Convert to an OpenCV mat
		cv::Mat depthMat = cv::Mat(cv::Size(front_depth_image.width, front_depth_image.height), CV_8UC4, uncompressedDepth.data());

		// Compress the image
		vector<uchar> compressedDepth;
		compressedDepth.resize(front_depth_image.height * front_depth_image.width * 4);
		cv::imencode(".png", depthMat, compressedDepth);
		compressedDepth.shrink_to_fit();

		// Publish the image
		frontDepthMessage.data = compressedDepth;
		frontDepthPublisher_->publish(frontDepthMessage);
		*/

		//t_end = duration_cast<duration<double>>(high_resolution_clock::now() - t_start);
		//RCLCPP_INFO(this->get_logger(), "-- published front depth image in %s seconds", std::to_string(t_end.count()));

		/*
		duration<double> tickEnd = duration_cast<duration<double>>(high_resolution_clock::now() - tickStart);
		RCLCPP_INFO(
			this->get_logger(),
			"front - publishing %s images at time %s took %s",
			std::to_string(imageResponses.size()),
			std::to_string(system_clock::to_time_t(system_clock::now())),
			std::to_string(tickEnd.count())
		);
		*/

		publishCount_++;
		if (publishCount_ % 50 == 0) {
			duration<double> print_span = duration_cast<duration<double>>(high_resolution_clock::now() - startTime_);
			double hz = (double)publishCount_ / print_span.count();

			RCLCPP_INFO(this->get_logger(), "front camera hz: %s", std::to_string(hz));

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

	rclcpp::executors::MultiThreadedExecutor executor(rclcpp::executor::create_default_executor_arguments(), 4, false);
	std::cout << "threads: " << executor.get_number_of_threads() << "\n";

	auto node = std::make_shared<ROS2FrontCamera>();
	executor.add_node(node);

	// worried it will eventually stop for no reason
	executor.spin();

	shutdown_handler(NULL);

	return 0;
}
