// generated from rosidl_generator_c/resource/msg__functions.h.em
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__MSG__OCCUPANCY_GRID_UPDATE__FUNCTIONS_H_
#define MAP_MSGS__MSG__OCCUPANCY_GRID_UPDATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "map_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "map_msgs/msg/occupancy_grid_update__struct.h"

/// Initialize map_msgs/OccupancyGridUpdate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(map_msgs__msg__OccupancyGridUpdate)) before
 * or use map_msgs__msg__OccupancyGridUpdate__create() to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
bool
map_msgs__msg__OccupancyGridUpdate__init(map_msgs__msg__OccupancyGridUpdate * msg);

/// Finalize map_msgs/OccupancyGridUpdate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
void
map_msgs__msg__OccupancyGridUpdate__fini(map_msgs__msg__OccupancyGridUpdate * msg);

/// Create map_msgs/OccupancyGridUpdate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls map_msgs__msg__OccupancyGridUpdate__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
map_msgs__msg__OccupancyGridUpdate *
map_msgs__msg__OccupancyGridUpdate__create();

/// Destroy map_msgs/OccupancyGridUpdate message.
/**
 * It calls map_msgs__msg__OccupancyGridUpdate__fini() and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
void
map_msgs__msg__OccupancyGridUpdate__destroy(map_msgs__msg__OccupancyGridUpdate * msg);


/// Initialize array of map_msgs/OccupancyGridUpdate messages.
/**
 * It allocates the memory for the number of elements and
 * calls map_msgs__msg__OccupancyGridUpdate__init() for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
bool
map_msgs__msg__OccupancyGridUpdate__Array__init(map_msgs__msg__OccupancyGridUpdate__Array * array, size_t size);

/// Finalize array of map_msgs/OccupancyGridUpdate messages.
/**
 * It calls map_msgs__msg__OccupancyGridUpdate__fini() for each element of the array and
 * frees the memory for the number of elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
void
map_msgs__msg__OccupancyGridUpdate__Array__fini(map_msgs__msg__OccupancyGridUpdate__Array * array);

/// Create array of map_msgs/OccupancyGridUpdate messages.
/**
 * It allocates the memory for the array and
 * calls map_msgs__msg__OccupancyGridUpdate__Array__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
map_msgs__msg__OccupancyGridUpdate__Array *
map_msgs__msg__OccupancyGridUpdate__Array__create(size_t size);

/// Destroy array of map_msgs/OccupancyGridUpdate messages.
/**
 * It calls map_msgs__msg__OccupancyGridUpdate__Array__fini() on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_map_msgs
void
map_msgs__msg__OccupancyGridUpdate__Array__destroy(map_msgs__msg__OccupancyGridUpdate__Array * array);

#ifdef __cplusplus
}
#endif

#endif  // MAP_MSGS__MSG__OCCUPANCY_GRID_UPDATE__FUNCTIONS_H_