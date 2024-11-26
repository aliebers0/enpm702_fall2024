// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from enpm702_msgs:msg/BotStatus.idl
// generated code does not contain a copyright notice

#ifndef ENPM702_MSGS__MSG__DETAIL__BOT_STATUS__STRUCT_HPP_
#define ENPM702_MSGS__MSG__DETAIL__BOT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__enpm702_msgs__msg__BotStatus __attribute__((deprecated))
#else
# define DEPRECATED__enpm702_msgs__msg__BotStatus __declspec(deprecated)
#endif

namespace enpm702_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BotStatus_
{
  using Type = BotStatus_<ContainerAllocator>;

  explicit BotStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model = 0;
      std::fill<typename std::array<double, 2>::iterator, double>(this->velocities.begin(), this->velocities.end(), 0.0);
    }
  }

  explicit BotStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    velocities(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->model = 0;
      std::fill<typename std::array<double, 2>::iterator, double>(this->velocities.begin(), this->velocities.end(), 0.0);
    }
  }

  // field types and members
  using _model_type =
    uint8_t;
  _model_type model;
  using _pose_type =
    geometry_msgs::msg::Pose2D_<ContainerAllocator>;
  _pose_type pose;
  using _velocities_type =
    std::array<double, 2>;
  _velocities_type velocities;

  // setters for named parameter idiom
  Type & set__model(
    const uint8_t & _arg)
  {
    this->model = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose2D_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__velocities(
    const std::array<double, 2> & _arg)
  {
    this->velocities = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BURGER =
    1u;
  static constexpr uint8_t WAFFLE =
    2u;
  static constexpr uint8_t WAFFLE_PI =
    3u;

  // pointer types
  using RawPtr =
    enpm702_msgs::msg::BotStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const enpm702_msgs::msg::BotStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<enpm702_msgs::msg::BotStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<enpm702_msgs::msg::BotStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      enpm702_msgs::msg::BotStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<enpm702_msgs::msg::BotStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      enpm702_msgs::msg::BotStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<enpm702_msgs::msg::BotStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<enpm702_msgs::msg::BotStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<enpm702_msgs::msg::BotStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__enpm702_msgs__msg__BotStatus
    std::shared_ptr<enpm702_msgs::msg::BotStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__enpm702_msgs__msg__BotStatus
    std::shared_ptr<enpm702_msgs::msg::BotStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BotStatus_ & other) const
  {
    if (this->model != other.model) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->velocities != other.velocities) {
      return false;
    }
    return true;
  }
  bool operator!=(const BotStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BotStatus_

// alias to use template instance with default allocator
using BotStatus =
  enpm702_msgs::msg::BotStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BotStatus_<ContainerAllocator>::BURGER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BotStatus_<ContainerAllocator>::WAFFLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BotStatus_<ContainerAllocator>::WAFFLE_PI;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace enpm702_msgs

#endif  // ENPM702_MSGS__MSG__DETAIL__BOT_STATUS__STRUCT_HPP_
