#pragma once

#ifndef NUMBER_PUBLISHER_HPP
#define NUMBER_PUBLISHER_HPP

#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/int64.hpp"

using namespace std::chrono_literals;

namespace components_cpp{

    class NumberPublisher : public rclcpp::Node{

        public:
            NumberPublisher(const rclcpp::NodeOptions &options);

        private:
            void publishNumber();

            int number_;
            rclcpp::Publisher<example_interfaces::msg::Int64>::SharedPtr number_publisher_;
            rclcpp::TimerBase::SharedPtr number_timer_;
    };
    
} // namespace components_cpp

#include "rclcpp_components/register_node_macro.hpp"
RCLCPP_COMPONENTS_REGISTER_NODE(components_cpp::NumberPublisher)

#endif