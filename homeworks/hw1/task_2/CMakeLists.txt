cmake_minimum_required(VERSION 3.23) # mandatory
project(task_2)                     # Mandatory
set(CMAKE_CXX_STANDARD 17)          # Use c++17. (-std=c++17)

set(CMAKE_EXPORT_COMPILE_COMANDS ON)


# tell cmake where to look for *.hpp, *.h files
include_directories(include/)

# Create library 
add_library(ipb_arithmetic )
