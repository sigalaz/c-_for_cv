cmake_minimum_required(VERSION 3.22)
project(lecture_3)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include_directories(include/)
include_directories(fmt/include)

add_library(image_browser api/image_browser.cpp)
add_library(image_writer api/html_writer.cpp)
add_executable(main api/main.cpp)
#target_link_libraries(image_writer image_browser)
target_link_libraries(main image_browser image_writer)


