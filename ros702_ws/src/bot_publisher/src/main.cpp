#include <rclcpp/rclcpp.hpp>
#include "bot_publsiher.hpp"

int main(int argc, char** argv) {
    // init
    rclcpp::init(argc, argv);
    // node
    auto node = std::make_shared<BotPublisher>("bot_publisher");
    RCLCPP_INFO_STREAM(node->get_logger(), "Hello");
    // cleanup
    rclcpp::spin(node);
    RCLCPP_INFO_STREAM(node->get_logger(), "Spinning");
    rclcpp::shutdown();
}
