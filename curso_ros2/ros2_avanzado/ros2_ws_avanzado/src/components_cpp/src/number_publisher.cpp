
#include "../include/components_cpp/number_publisher.hpp"

namespace components_cpp{

    NumberPublisher::NumberPublisher(const rclcpp::NodeOptions &options) : Node("number_publisher", options){
        number_ = 2;

        number_publisher_ = this->create_publisher<example_interfaces::msg::Int64>("number", 10);
        number_timer_ = this->create_wall_timer(1000ms,
                                                        std::bind(&NumberPublisher::publishNumber, this));
        RCLCPP_INFO(this->get_logger(), "Number publisher has been started.");
    }

    void NumberPublisher::publishNumber(){
        auto msg = example_interfaces::msg::Int64();
        msg.data = number_;
        number_publisher_->publish(msg);
    }

} // namespace components_cpp



