/* Copyright 2014 Open Source Robotics Foundation, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef RMW_RMW_TYPES_H_
#define RMW_RMW_TYPES_H_

typedef int rmw_ret_t;
#define RMW_RET_OK 0

typedef struct rmw_node_handle_t
{
  const char * implementation_identifier;
  void * data;
} rmw_node_handle_t;

typedef struct rmw_publisher_handle_t
{
  const char * implementation_identifier;
  void * data;
} rmw_publisher_handle_t;

typedef struct rmw_subscription_handle_t
{
  const char * implementation_identifier;
  void * data;
} rmw_subscription_handle_t;

typedef struct rmw_guard_condition_handle_t
{
  const char * implementation_identifier;
  void * data;
} rmw_guard_condition_handle_t;

typedef struct rmw_subscription_handles_t
{
  unsigned long subscriber_count;
  void * * subscribers;
} rmw_subscription_handles_t;

typedef struct rmw_guard_condition_handles_t
{
  unsigned long guard_condition_count;
  void * * guard_conditions;
} rmw_guard_condition_handles_t;

#endif  /* RMW_RMW_TYPES_H_ */
