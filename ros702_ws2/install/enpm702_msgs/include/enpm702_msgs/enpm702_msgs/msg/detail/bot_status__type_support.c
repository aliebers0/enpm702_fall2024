// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from enpm702_msgs:msg/BotStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "enpm702_msgs/msg/detail/bot_status__rosidl_typesupport_introspection_c.h"
#include "enpm702_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "enpm702_msgs/msg/detail/bot_status__functions.h"
#include "enpm702_msgs/msg/detail/bot_status__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose2_d.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__BotStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  enpm702_msgs__msg__BotStatus__init(message_memory);
}

void enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__BotStatus_fini_function(void * message_memory)
{
  enpm702_msgs__msg__BotStatus__fini(message_memory);
}

size_t enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__size_function__BotStatus__velocities(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__get_const_function__BotStatus__velocities(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__get_function__BotStatus__velocities(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__fetch_function__BotStatus__velocities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__get_const_function__BotStatus__velocities(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__assign_function__BotStatus__velocities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__get_function__BotStatus__velocities(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__BotStatus_message_member_array[3] = {
  {
    "model",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(enpm702_msgs__msg__BotStatus, model),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(enpm702_msgs__msg__BotStatus, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(enpm702_msgs__msg__BotStatus, velocities),  // bytes offset in struct
    NULL,  // default value
    enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__size_function__BotStatus__velocities,  // size() function pointer
    enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__get_const_function__BotStatus__velocities,  // get_const(index) function pointer
    enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__get_function__BotStatus__velocities,  // get(index) function pointer
    enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__fetch_function__BotStatus__velocities,  // fetch(index, &value) function pointer
    enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__assign_function__BotStatus__velocities,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__BotStatus_message_members = {
  "enpm702_msgs__msg",  // message namespace
  "BotStatus",  // message name
  3,  // number of fields
  sizeof(enpm702_msgs__msg__BotStatus),
  enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__BotStatus_message_member_array,  // message members
  enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__BotStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__BotStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__BotStatus_message_type_support_handle = {
  0,
  &enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__BotStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_enpm702_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, enpm702_msgs, msg, BotStatus)() {
  enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__BotStatus_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  if (!enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__BotStatus_message_type_support_handle.typesupport_identifier) {
    enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__BotStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &enpm702_msgs__msg__BotStatus__rosidl_typesupport_introspection_c__BotStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
