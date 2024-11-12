#include <rclcpp/rclcpp.hpp>

class FirstNode: public rclcpp::Node{
    public:
        FirstNode(std::string node_name):rclcpp::Node(node_name){}
    private:
};