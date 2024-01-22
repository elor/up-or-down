cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(up-or-down VERSION 0.1.0)

include(cmake/CPM.cmake)

add_executable(main src/main.cpp)
target_link_libraries(main)
