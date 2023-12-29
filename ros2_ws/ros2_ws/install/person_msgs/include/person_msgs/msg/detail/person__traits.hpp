// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from person_msgs:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef PERSON_MSGS__MSG__DETAIL__PERSON__TRAITS_HPP_
#define PERSON_MSGS__MSG__DETAIL__PERSON__TRAITS_HPP_

#include "person_msgs/msg/detail/person__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<person_msgs::msg::Person>()
{
  return "person_msgs::msg::Person";
}

template<>
inline const char * name<person_msgs::msg::Person>()
{
  return "person_msgs/msg/Person";
}

template<>
struct has_fixed_size<person_msgs::msg::Person>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<person_msgs::msg::Person>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<person_msgs::msg::Person>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PERSON_MSGS__MSG__DETAIL__PERSON__TRAITS_HPP_
