#pragma once

#ifndef TORTUGA_CONTROLLER2
#define TORTUGA_CONTROLLER2

#include <rclcpp/rclcpp.hpp>
#include "comienzo_interfaces/msg/tortuga_array.hpp"
#include "turtlesim/msg/pose.hpp"
#include "comienzo_interfaces/msg/tortuga.hpp"
#include "geometry_msgs/msg/twist.hpp"

class TortugaController2Node : public rclcpp::Node{ 
    public:
        TortugaController2Node();
        void callbackTurtlePose(const turtlesim::msg::Pose::SharedPtr pose);
        void callbackTortugasVivas(const comienzo_interfaces::msg::TortugaArray::SharedPtr tortugas_vivas);
        void controlLoop();
        void callCatchTortugaService(const std::string& nombre_tortuga);

    private:
        rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscriber_pose_{};
        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_cmd_vel_{};
        rclcpp::Subscription<comienzo_interfaces::msg::TortugaArray>::SharedPtr subscriber_tortugas_vivas_{};
        rclcpp::TimerBase::SharedPtr timer_control_loop_{};
        comienzo_interfaces::msg::Tortuga tortuga_objetivo_{};
        std::vector<std::shared_ptr<std::thread>> hilos_tortuga_atrapada_{};
        turtlesim::msg::Pose pose_{};
};    

#endif