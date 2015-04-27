#set verbose make
set(CMAKE_VERBOSE_MAKEFILE ON)

cmake_minimum_required(VERSION 3.1)
project(rock_the_oc)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


set(OVR_INCLUDE_DIRS /Users/protocol/Oculus/OculusSDK/LibOVR/Include /Users/protocol/Oculus/OculusSDK/LibOVRKernel/Src)

include_directories( ${OVR_INCLUDE_DIRS} )

set(SOURCE_FILES main.cpp)
add_executable(rock_the_oc ${SOURCE_FILES})




add_library(LibOVR STATIC IMPORTED )
set_target_properties( LibOVR PROPERTIES IMPORTED_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/lib/LibOVR )

target_link_libraries(rock_the_oc LibOVR)


