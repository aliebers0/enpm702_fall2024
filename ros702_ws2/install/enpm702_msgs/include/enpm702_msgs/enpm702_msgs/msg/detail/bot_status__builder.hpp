// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from enpm702_msgs:msg/BotStatus.idl
// generated code does not contain a copyright notice

#ifndef ENPM702_MSGS__MSG__DETAIL__BOT_STATUS__BUILDER_HPP_
#define ENPM702_MSGS__MSG__DETAIL__BOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "enpm702_msgs/msg/detail/bot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace enpm702_msgs
{

namespace msg
{

namespace builder
{

class Init_BotStatus_velocities
{
public:
  explicit Init_BotStatus_velocities(::enpm702_msgs::msg::BotStatus & msg)
  : msg_(msg)
  {}
  ::enpm702_msgs::msg::BotStatus velocities(::enpm702_msgs::msg::BotStatus::_velocities_type arg)
  {
    msg_.velocities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::enpm702_msgs::msg::BotStatus msg_;
};

class Init_BotStatus_pose
{
public:
  explicit Init_BotStatus_pose(::enpm702_msgs::msg::BotStatus & msg)
  : msg_(msg)
  {}
  Init_BotStatus_velocities pose(::enpm702_msgs::msg::BotStatus::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_BotStatus_velocities(msg_);
  }

private:
  ::enpm702_msgs::msg::BotStatus msg_;
};

class Init_BotStatus_model
{
public:
  Init_BotStatus_model()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BotStatus_pose model(::enpm702_msgs::msg::BotStatus::_model_type arg)
  {
    msg_.model = std::move(arg);
    return Init_BotStatus_pose(msg_);
  }

private:
  ::enpm702_msgs::msg::BotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::enpm702_msgs::msg::BotStatus>()
{
  return enpm702_msgs::msg::builder::Init_BotStatus_model();
}

}  // namespace enpm702_msgs

#endif  // ENPM702_MSGS__MSG__DETAIL__BOT_STATUS__BUILDER_HPP_
