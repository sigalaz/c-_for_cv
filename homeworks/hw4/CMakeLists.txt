cmake_minimum_required(VERSION 3.22)
project(homework_4)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include_directories(include/)

add_executable(main src/main.cpp)
