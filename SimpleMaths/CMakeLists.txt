cmake_minimum_required(VERSION 3.3)
project(SimpleMaths)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(SimpleMaths ${SOURCE_FILES})