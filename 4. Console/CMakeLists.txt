cmake_minimum_required(VERSION 3.3)
project(4_Console)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(4_Console ${SOURCE_FILES})