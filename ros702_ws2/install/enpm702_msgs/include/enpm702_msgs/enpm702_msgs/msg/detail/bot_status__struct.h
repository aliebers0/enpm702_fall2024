// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from enpm702_msgs:msg/BotStatus.idl
// generated code does not contain a copyright notice

#ifndef ENPM702_MSGS__MSG__DETAIL__BOT_STATUS__STRUCT_H_
#define ENPM702_MSGS__MSG__DETAIL__BOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BURGER'.
enum
{
  enpm702_msgs__msg__BotStatus__BURGER = 1
};

/// Constant 'WAFFLE'.
enum
{
  enpm702_msgs__msg__BotStatus__WAFFLE = 2
};

/// Constant 'WAFFLE_PI'.
enum
{
  enpm702_msgs__msg__BotStatus__WAFFLE_PI = 3
};

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose2_d__struct.h"

/// Struct defined in msg/BotStatus in the package enpm702_msgs.
/**
  * The field model will take only one of the three following values
 */
typedef struct enpm702_msgs__msg__BotStatus
{
  /// BURGER, WAFFLE, or WAFFLE_PI
  uint8_t model;
  /// x, y, theta
  geometry_msgs__msg__Pose2D pose;
  /// [linear.x, angular.z]
  double velocities[2];
} enpm702_msgs__msg__BotStatus;

// Struct for a sequence of enpm702_msgs__msg__BotStatus.
typedef struct enpm702_msgs__msg__BotStatus__Sequence
{
  enpm702_msgs__msg__BotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} enpm702_msgs__msg__BotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENPM702_MSGS__MSG__DETAIL__BOT_STATUS__STRUCT_H_
