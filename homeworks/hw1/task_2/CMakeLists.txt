cmake_minimum_required(VERSION 3.22)
project(hw1_task_2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_INSTALL_PREFIX ./install)
include_directories(include/)

# create library libipb_artithmetic , this time this is not necesaary since we a already a built version
add_library(ipb_arithmetic src/sum.cpp src/subtract.cpp)
install(TARGETS ipb_arithmetic DESTINATION lib)
install(FILES subtract.h sum.h DESTINATION include/ipb_arithmetic)
install(FILES ipb_arithmetic.h DESTINATION include/)

add_executable(main src/main.cpp)
target_link_libraries(main ipb_arithmetic)
