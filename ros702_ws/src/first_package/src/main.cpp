#include <rclcpp/rclcpp.hpp>
#include "first_package/first_node.hpp"

int main(int argc, char** argv) {
    // init
    rclcpp::init(argc, argv);
    // node
    auto node = std::make_shared<rclcpp::Node>("hello");
    RCLCPP_INFO_STREAM(node->get_logger(), "Hello");
    // cleanup
    rclcpp::spin(node);
    RCLCPP_INFO_STREAM(node->get_logger(), "Spinning");
    rclcpp::shutdown();
}
