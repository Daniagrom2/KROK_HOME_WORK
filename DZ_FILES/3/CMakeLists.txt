cmake_minimum_required(VERSION 3.17)
project(3)

set(CMAKE_CXX_STANDARD 20)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ ")
set(SOURCE_FILES main.cpp)
add_executable(3 main.cpp)