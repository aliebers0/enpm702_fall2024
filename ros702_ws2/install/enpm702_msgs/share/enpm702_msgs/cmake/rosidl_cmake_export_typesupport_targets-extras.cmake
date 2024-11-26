# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:enpm702_msgs__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:enpm702_msgs__rosidl_typesupport_fastrtps_c;__rosidl_generator_cpp:enpm702_msgs__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:enpm702_msgs__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_c:enpm702_msgs__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:enpm702_msgs__rosidl_typesupport_c;__rosidl_typesupport_introspection_cpp:enpm702_msgs__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:enpm702_msgs__rosidl_typesupport_cpp;__rosidl_generator_py:enpm702_msgs__rosidl_generator_py")

# populate enpm702_msgs_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "enpm702_msgs::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'enpm702_msgs' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND enpm702_msgs_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
