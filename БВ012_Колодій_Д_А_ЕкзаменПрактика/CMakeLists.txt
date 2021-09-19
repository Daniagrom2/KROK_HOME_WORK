cmake_minimum_required(VERSION 3.17)
project(012____)

set(CMAKE_CXX_STANDARD 14)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ ")
add_executable(012____ main.cpp Book.h Reader.h Book.cpp Reader.cpp)