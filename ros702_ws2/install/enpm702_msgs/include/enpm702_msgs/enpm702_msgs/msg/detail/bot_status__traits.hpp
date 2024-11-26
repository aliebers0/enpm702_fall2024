// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from enpm702_msgs:msg/BotStatus.idl
// generated code does not contain a copyright notice

#ifndef ENPM702_MSGS__MSG__DETAIL__BOT_STATUS__TRAITS_HPP_
#define ENPM702_MSGS__MSG__DETAIL__BOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "enpm702_msgs/msg/detail/bot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace enpm702_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BotStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: model
  {
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: velocities
  {
    if (msg.velocities.size() == 0) {
      out << "velocities: []";
    } else {
      out << "velocities: [";
      size_t pending_items = msg.velocities.size();
      for (auto item : msg.velocities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: velocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocities.size() == 0) {
      out << "velocities: []\n";
    } else {
      out << "velocities:\n";
      for (auto item : msg.velocities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BotStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace enpm702_msgs

namespace rosidl_generator_traits
{

[[deprecated("use enpm702_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const enpm702_msgs::msg::BotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  enpm702_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use enpm702_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const enpm702_msgs::msg::BotStatus & msg)
{
  return enpm702_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<enpm702_msgs::msg::BotStatus>()
{
  return "enpm702_msgs::msg::BotStatus";
}

template<>
inline const char * name<enpm702_msgs::msg::BotStatus>()
{
  return "enpm702_msgs/msg/BotStatus";
}

template<>
struct has_fixed_size<enpm702_msgs::msg::BotStatus>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct has_bounded_size<enpm702_msgs::msg::BotStatus>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose2D>::value> {};

template<>
struct is_message<enpm702_msgs::msg::BotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENPM702_MSGS__MSG__DETAIL__BOT_STATUS__TRAITS_HPP_
