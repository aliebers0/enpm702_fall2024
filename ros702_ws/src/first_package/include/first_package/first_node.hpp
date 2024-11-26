#include <rclcpp/rclcpp.hpp>

class FirstNode: public rclcpp::Node{
    public:
        FirstNode(std::string node_name):rclcpp::Node(node_name){
            RCLCPP_INFO_STREAM(this->get_logger(), "Hello");
        }
    private:
};