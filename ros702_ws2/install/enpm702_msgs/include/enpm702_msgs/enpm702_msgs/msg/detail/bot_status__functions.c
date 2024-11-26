// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from enpm702_msgs:msg/BotStatus.idl
// generated code does not contain a copyright notice
#include "enpm702_msgs/msg/detail/bot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

bool
enpm702_msgs__msg__BotStatus__init(enpm702_msgs__msg__BotStatus * msg)
{
  if (!msg) {
    return false;
  }
  // model
  // pose
  if (!geometry_msgs__msg__Pose2D__init(&msg->pose)) {
    enpm702_msgs__msg__BotStatus__fini(msg);
    return false;
  }
  // velocities
  return true;
}

void
enpm702_msgs__msg__BotStatus__fini(enpm702_msgs__msg__BotStatus * msg)
{
  if (!msg) {
    return;
  }
  // model
  // pose
  geometry_msgs__msg__Pose2D__fini(&msg->pose);
  // velocities
}

bool
enpm702_msgs__msg__BotStatus__are_equal(const enpm702_msgs__msg__BotStatus * lhs, const enpm702_msgs__msg__BotStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // model
  if (lhs->model != rhs->model) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose2D__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // velocities
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->velocities[i] != rhs->velocities[i]) {
      return false;
    }
  }
  return true;
}

bool
enpm702_msgs__msg__BotStatus__copy(
  const enpm702_msgs__msg__BotStatus * input,
  enpm702_msgs__msg__BotStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // model
  output->model = input->model;
  // pose
  if (!geometry_msgs__msg__Pose2D__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // velocities
  for (size_t i = 0; i < 2; ++i) {
    output->velocities[i] = input->velocities[i];
  }
  return true;
}

enpm702_msgs__msg__BotStatus *
enpm702_msgs__msg__BotStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  enpm702_msgs__msg__BotStatus * msg = (enpm702_msgs__msg__BotStatus *)allocator.allocate(sizeof(enpm702_msgs__msg__BotStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(enpm702_msgs__msg__BotStatus));
  bool success = enpm702_msgs__msg__BotStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
enpm702_msgs__msg__BotStatus__destroy(enpm702_msgs__msg__BotStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    enpm702_msgs__msg__BotStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
enpm702_msgs__msg__BotStatus__Sequence__init(enpm702_msgs__msg__BotStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  enpm702_msgs__msg__BotStatus * data = NULL;

  if (size) {
    data = (enpm702_msgs__msg__BotStatus *)allocator.zero_allocate(size, sizeof(enpm702_msgs__msg__BotStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = enpm702_msgs__msg__BotStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        enpm702_msgs__msg__BotStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
enpm702_msgs__msg__BotStatus__Sequence__fini(enpm702_msgs__msg__BotStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      enpm702_msgs__msg__BotStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

enpm702_msgs__msg__BotStatus__Sequence *
enpm702_msgs__msg__BotStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  enpm702_msgs__msg__BotStatus__Sequence * array = (enpm702_msgs__msg__BotStatus__Sequence *)allocator.allocate(sizeof(enpm702_msgs__msg__BotStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = enpm702_msgs__msg__BotStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
enpm702_msgs__msg__BotStatus__Sequence__destroy(enpm702_msgs__msg__BotStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    enpm702_msgs__msg__BotStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
enpm702_msgs__msg__BotStatus__Sequence__are_equal(const enpm702_msgs__msg__BotStatus__Sequence * lhs, const enpm702_msgs__msg__BotStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!enpm702_msgs__msg__BotStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
enpm702_msgs__msg__BotStatus__Sequence__copy(
  const enpm702_msgs__msg__BotStatus__Sequence * input,
  enpm702_msgs__msg__BotStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(enpm702_msgs__msg__BotStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    enpm702_msgs__msg__BotStatus * data =
      (enpm702_msgs__msg__BotStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!enpm702_msgs__msg__BotStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          enpm702_msgs__msg__BotStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!enpm702_msgs__msg__BotStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
