cmake_minimum_required(VERSION 3.23)
project(hw2_task_1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include_directories(include/)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../bin)

add_executable(task_1 src/main.cpp)