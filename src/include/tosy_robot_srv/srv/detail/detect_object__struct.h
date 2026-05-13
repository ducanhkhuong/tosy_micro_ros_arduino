// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tosy_robot_srv:srv/DetectObject.idl
// generated code does not contain a copyright notice

#ifndef TOSY_ROBOT_SRV__SRV__DETAIL__DETECT_OBJECT__STRUCT_H_
#define TOSY_ROBOT_SRV__SRV__DETAIL__DETECT_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/DetectObject in the package tosy_robot_srv.
typedef struct tosy_robot_srv__srv__DetectObject_Request
{
  rosidl_runtime_c__String object_name;
} tosy_robot_srv__srv__DetectObject_Request;

// Struct for a sequence of tosy_robot_srv__srv__DetectObject_Request.
typedef struct tosy_robot_srv__srv__DetectObject_Request__Sequence
{
  tosy_robot_srv__srv__DetectObject_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tosy_robot_srv__srv__DetectObject_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/DetectObject in the package tosy_robot_srv.
typedef struct tosy_robot_srv__srv__DetectObject_Response
{
  bool success;
  double x;
  double y;
  double z;
} tosy_robot_srv__srv__DetectObject_Response;

// Struct for a sequence of tosy_robot_srv__srv__DetectObject_Response.
typedef struct tosy_robot_srv__srv__DetectObject_Response__Sequence
{
  tosy_robot_srv__srv__DetectObject_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tosy_robot_srv__srv__DetectObject_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOSY_ROBOT_SRV__SRV__DETAIL__DETECT_OBJECT__STRUCT_H_
