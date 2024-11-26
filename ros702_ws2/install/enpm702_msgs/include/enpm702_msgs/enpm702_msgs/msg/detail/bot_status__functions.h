// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from enpm702_msgs:msg/BotStatus.idl
// generated code does not contain a copyright notice

#ifndef ENPM702_MSGS__MSG__DETAIL__BOT_STATUS__FUNCTIONS_H_
#define ENPM702_MSGS__MSG__DETAIL__BOT_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "enpm702_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "enpm702_msgs/msg/detail/bot_status__struct.h"

/// Initialize msg/BotStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * enpm702_msgs__msg__BotStatus
 * )) before or use
 * enpm702_msgs__msg__BotStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_enpm702_msgs
bool
enpm702_msgs__msg__BotStatus__init(enpm702_msgs__msg__BotStatus * msg);

/// Finalize msg/BotStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_enpm702_msgs
void
enpm702_msgs__msg__BotStatus__fini(enpm702_msgs__msg__BotStatus * msg);

/// Create msg/BotStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * enpm702_msgs__msg__BotStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_enpm702_msgs
enpm702_msgs__msg__BotStatus *
enpm702_msgs__msg__BotStatus__create();

/// Destroy msg/BotStatus message.
/**
 * It calls
 * enpm702_msgs__msg__BotStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_enpm702_msgs
void
enpm702_msgs__msg__BotStatus__destroy(enpm702_msgs__msg__BotStatus * msg);

/// Check for msg/BotStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_enpm702_msgs
bool
enpm702_msgs__msg__BotStatus__are_equal(const enpm702_msgs__msg__BotStatus * lhs, const enpm702_msgs__msg__BotStatus * rhs);

/// Copy a msg/BotStatus message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_enpm702_msgs
bool
enpm702_msgs__msg__BotStatus__copy(
  const enpm702_msgs__msg__BotStatus * input,
  enpm702_msgs__msg__BotStatus * output);

/// Initialize array of msg/BotStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * enpm702_msgs__msg__BotStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_enpm702_msgs
bool
enpm702_msgs__msg__BotStatus__Sequence__init(enpm702_msgs__msg__BotStatus__Sequence * array, size_t size);

/// Finalize array of msg/BotStatus messages.
/**
 * It calls
 * enpm702_msgs__msg__BotStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_enpm702_msgs
void
enpm702_msgs__msg__BotStatus__Sequence__fini(enpm702_msgs__msg__BotStatus__Sequence * array);

/// Create array of msg/BotStatus messages.
/**
 * It allocates the memory for the array and calls
 * enpm702_msgs__msg__BotStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_enpm702_msgs
enpm702_msgs__msg__BotStatus__Sequence *
enpm702_msgs__msg__BotStatus__Sequence__create(size_t size);

/// Destroy array of msg/BotStatus messages.
/**
 * It calls
 * enpm702_msgs__msg__BotStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_enpm702_msgs
void
enpm702_msgs__msg__BotStatus__Sequence__destroy(enpm702_msgs__msg__BotStatus__Sequence * array);

/// Check for msg/BotStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_enpm702_msgs
bool
enpm702_msgs__msg__BotStatus__Sequence__are_equal(const enpm702_msgs__msg__BotStatus__Sequence * lhs, const enpm702_msgs__msg__BotStatus__Sequence * rhs);

/// Copy an array of msg/BotStatus messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_enpm702_msgs
bool
enpm702_msgs__msg__BotStatus__Sequence__copy(
  const enpm702_msgs__msg__BotStatus__Sequence * input,
  enpm702_msgs__msg__BotStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ENPM702_MSGS__MSG__DETAIL__BOT_STATUS__FUNCTIONS_H_
