#include "../include/lifecycle_manager.hpp"

//TODO: Está explicado solo el python, lo dejo de momento por hacer para ver si consigo
//      hacerlo en C++

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<LifecycleManagerNode>();
    rclcpp::spin(node->get_node_base_interface());
    rclcpp::shutdown();
    return 0;
}