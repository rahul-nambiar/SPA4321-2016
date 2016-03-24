cmake_minimum_required(VERSION 3.3)
project(Ex3_1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp functions.cpp functions.h random.cpp random.h)
add_executable(Ex3_1 ${SOURCE_FILES})