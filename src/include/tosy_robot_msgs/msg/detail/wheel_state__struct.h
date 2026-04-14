// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tosy_robot_msgs:msg/WheelState.idl
// generated code does not contain a copyright notice

#ifndef TOSY_ROBOT_MSGS__MSG__DETAIL__WHEEL_STATE__STRUCT_H_
#define TOSY_ROBOT_MSGS__MSG__DETAIL__WHEEL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/WheelState in the package tosy_robot_msgs.
typedef struct tosy_robot_msgs__msg__WheelState
{
  uint32_t time_us;
  double position[2];
} tosy_robot_msgs__msg__WheelState;

// Struct for a sequence of tosy_robot_msgs__msg__WheelState.
typedef struct tosy_robot_msgs__msg__WheelState__Sequence
{
  tosy_robot_msgs__msg__WheelState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tosy_robot_msgs__msg__WheelState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOSY_ROBOT_MSGS__MSG__DETAIL__WHEEL_STATE__STRUCT_H_
