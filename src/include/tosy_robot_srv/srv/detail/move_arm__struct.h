// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tosy_robot_srv:srv/MoveArm.idl
// generated code does not contain a copyright notice

#ifndef TOSY_ROBOT_SRV__SRV__DETAIL__MOVE_ARM__STRUCT_H_
#define TOSY_ROBOT_SRV__SRV__DETAIL__MOVE_ARM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in srv/MoveArm in the package tosy_robot_srv.
typedef struct tosy_robot_srv__srv__MoveArm_Request
{
  geometry_msgs__msg__Pose target_pose;
} tosy_robot_srv__srv__MoveArm_Request;

// Struct for a sequence of tosy_robot_srv__srv__MoveArm_Request.
typedef struct tosy_robot_srv__srv__MoveArm_Request__Sequence
{
  tosy_robot_srv__srv__MoveArm_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tosy_robot_srv__srv__MoveArm_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/MoveArm in the package tosy_robot_srv.
typedef struct tosy_robot_srv__srv__MoveArm_Response
{
  bool success;
} tosy_robot_srv__srv__MoveArm_Response;

// Struct for a sequence of tosy_robot_srv__srv__MoveArm_Response.
typedef struct tosy_robot_srv__srv__MoveArm_Response__Sequence
{
  tosy_robot_srv__srv__MoveArm_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tosy_robot_srv__srv__MoveArm_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOSY_ROBOT_SRV__SRV__DETAIL__MOVE_ARM__STRUCT_H_
