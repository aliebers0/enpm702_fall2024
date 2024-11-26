# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_multithreadedexecutor_demo_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED multithreadedexecutor_demo_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(multithreadedexecutor_demo_FOUND FALSE)
  elseif(NOT multithreadedexecutor_demo_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(multithreadedexecutor_demo_FOUND FALSE)
  endif()
  return()
endif()
set(_multithreadedexecutor_demo_CONFIG_INCLUDED TRUE)

# output package information
if(NOT multithreadedexecutor_demo_FIND_QUIETLY)
  message(STATUS "Found multithreadedexecutor_demo: 0.0.0 (${multithreadedexecutor_demo_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'multithreadedexecutor_demo' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${multithreadedexecutor_demo_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(multithreadedexecutor_demo_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${multithreadedexecutor_demo_DIR}/${_extra}")
endforeach()
