// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from enpm702_msgs:msg/BotStatus.idl
// generated code does not contain a copyright notice

#ifndef ENPM702_MSGS__MSG__DETAIL__BOT_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ENPM702_MSGS__MSG__DETAIL__BOT_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "enpm702_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "enpm702_msgs/msg/detail/bot_status__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace enpm702_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_enpm702_msgs
cdr_serialize(
  const enpm702_msgs::msg::BotStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_enpm702_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  enpm702_msgs::msg::BotStatus & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_enpm702_msgs
get_serialized_size(
  const enpm702_msgs::msg::BotStatus & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_enpm702_msgs
max_serialized_size_BotStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace enpm702_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_enpm702_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, enpm702_msgs, msg, BotStatus)();

#ifdef __cplusplus
}
#endif

#endif  // ENPM702_MSGS__MSG__DETAIL__BOT_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
