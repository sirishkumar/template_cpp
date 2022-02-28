cmake_minimum_required(VERSION 3.21)
project(smart_pointers)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -Wextra")
add_subdirectory(tests)
enable_testing()

add_library(smart_ptrs main.cpp unique_ptr.cpp)
target_include_directories(smart_ptrs
        PUBLIC
        .)

