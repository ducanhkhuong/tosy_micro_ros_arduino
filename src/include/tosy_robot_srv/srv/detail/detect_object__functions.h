// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tosy_robot_srv:srv/DetectObject.idl
// generated code does not contain a copyright notice

#ifndef TOSY_ROBOT_SRV__SRV__DETAIL__DETECT_OBJECT__FUNCTIONS_H_
#define TOSY_ROBOT_SRV__SRV__DETAIL__DETECT_OBJECT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tosy_robot_srv/msg/rosidl_generator_c__visibility_control.h"

#include "tosy_robot_srv/srv/detail/detect_object__struct.h"

/// Initialize srv/DetectObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tosy_robot_srv__srv__DetectObject_Request
 * )) before or use
 * tosy_robot_srv__srv__DetectObject_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
bool
tosy_robot_srv__srv__DetectObject_Request__init(tosy_robot_srv__srv__DetectObject_Request * msg);

/// Finalize srv/DetectObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
void
tosy_robot_srv__srv__DetectObject_Request__fini(tosy_robot_srv__srv__DetectObject_Request * msg);

/// Create srv/DetectObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tosy_robot_srv__srv__DetectObject_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
tosy_robot_srv__srv__DetectObject_Request *
tosy_robot_srv__srv__DetectObject_Request__create();

/// Destroy srv/DetectObject message.
/**
 * It calls
 * tosy_robot_srv__srv__DetectObject_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
void
tosy_robot_srv__srv__DetectObject_Request__destroy(tosy_robot_srv__srv__DetectObject_Request * msg);

/// Check for srv/DetectObject message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
bool
tosy_robot_srv__srv__DetectObject_Request__are_equal(const tosy_robot_srv__srv__DetectObject_Request * lhs, const tosy_robot_srv__srv__DetectObject_Request * rhs);

/// Copy a srv/DetectObject message.
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
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
bool
tosy_robot_srv__srv__DetectObject_Request__copy(
  const tosy_robot_srv__srv__DetectObject_Request * input,
  tosy_robot_srv__srv__DetectObject_Request * output);

/// Initialize array of srv/DetectObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * tosy_robot_srv__srv__DetectObject_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
bool
tosy_robot_srv__srv__DetectObject_Request__Sequence__init(tosy_robot_srv__srv__DetectObject_Request__Sequence * array, size_t size);

/// Finalize array of srv/DetectObject messages.
/**
 * It calls
 * tosy_robot_srv__srv__DetectObject_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
void
tosy_robot_srv__srv__DetectObject_Request__Sequence__fini(tosy_robot_srv__srv__DetectObject_Request__Sequence * array);

/// Create array of srv/DetectObject messages.
/**
 * It allocates the memory for the array and calls
 * tosy_robot_srv__srv__DetectObject_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
tosy_robot_srv__srv__DetectObject_Request__Sequence *
tosy_robot_srv__srv__DetectObject_Request__Sequence__create(size_t size);

/// Destroy array of srv/DetectObject messages.
/**
 * It calls
 * tosy_robot_srv__srv__DetectObject_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
void
tosy_robot_srv__srv__DetectObject_Request__Sequence__destroy(tosy_robot_srv__srv__DetectObject_Request__Sequence * array);

/// Check for srv/DetectObject message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
bool
tosy_robot_srv__srv__DetectObject_Request__Sequence__are_equal(const tosy_robot_srv__srv__DetectObject_Request__Sequence * lhs, const tosy_robot_srv__srv__DetectObject_Request__Sequence * rhs);

/// Copy an array of srv/DetectObject messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
bool
tosy_robot_srv__srv__DetectObject_Request__Sequence__copy(
  const tosy_robot_srv__srv__DetectObject_Request__Sequence * input,
  tosy_robot_srv__srv__DetectObject_Request__Sequence * output);

/// Initialize srv/DetectObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tosy_robot_srv__srv__DetectObject_Response
 * )) before or use
 * tosy_robot_srv__srv__DetectObject_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
bool
tosy_robot_srv__srv__DetectObject_Response__init(tosy_robot_srv__srv__DetectObject_Response * msg);

/// Finalize srv/DetectObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
void
tosy_robot_srv__srv__DetectObject_Response__fini(tosy_robot_srv__srv__DetectObject_Response * msg);

/// Create srv/DetectObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tosy_robot_srv__srv__DetectObject_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
tosy_robot_srv__srv__DetectObject_Response *
tosy_robot_srv__srv__DetectObject_Response__create();

/// Destroy srv/DetectObject message.
/**
 * It calls
 * tosy_robot_srv__srv__DetectObject_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
void
tosy_robot_srv__srv__DetectObject_Response__destroy(tosy_robot_srv__srv__DetectObject_Response * msg);

/// Check for srv/DetectObject message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
bool
tosy_robot_srv__srv__DetectObject_Response__are_equal(const tosy_robot_srv__srv__DetectObject_Response * lhs, const tosy_robot_srv__srv__DetectObject_Response * rhs);

/// Copy a srv/DetectObject message.
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
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
bool
tosy_robot_srv__srv__DetectObject_Response__copy(
  const tosy_robot_srv__srv__DetectObject_Response * input,
  tosy_robot_srv__srv__DetectObject_Response * output);

/// Initialize array of srv/DetectObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * tosy_robot_srv__srv__DetectObject_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
bool
tosy_robot_srv__srv__DetectObject_Response__Sequence__init(tosy_robot_srv__srv__DetectObject_Response__Sequence * array, size_t size);

/// Finalize array of srv/DetectObject messages.
/**
 * It calls
 * tosy_robot_srv__srv__DetectObject_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
void
tosy_robot_srv__srv__DetectObject_Response__Sequence__fini(tosy_robot_srv__srv__DetectObject_Response__Sequence * array);

/// Create array of srv/DetectObject messages.
/**
 * It allocates the memory for the array and calls
 * tosy_robot_srv__srv__DetectObject_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
tosy_robot_srv__srv__DetectObject_Response__Sequence *
tosy_robot_srv__srv__DetectObject_Response__Sequence__create(size_t size);

/// Destroy array of srv/DetectObject messages.
/**
 * It calls
 * tosy_robot_srv__srv__DetectObject_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
void
tosy_robot_srv__srv__DetectObject_Response__Sequence__destroy(tosy_robot_srv__srv__DetectObject_Response__Sequence * array);

/// Check for srv/DetectObject message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
bool
tosy_robot_srv__srv__DetectObject_Response__Sequence__are_equal(const tosy_robot_srv__srv__DetectObject_Response__Sequence * lhs, const tosy_robot_srv__srv__DetectObject_Response__Sequence * rhs);

/// Copy an array of srv/DetectObject messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tosy_robot_srv
bool
tosy_robot_srv__srv__DetectObject_Response__Sequence__copy(
  const tosy_robot_srv__srv__DetectObject_Response__Sequence * input,
  tosy_robot_srv__srv__DetectObject_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TOSY_ROBOT_SRV__SRV__DETAIL__DETECT_OBJECT__FUNCTIONS_H_
