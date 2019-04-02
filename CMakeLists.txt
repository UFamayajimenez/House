cmake_minimum_required(VERSION 3.13)
project(House)

set(CMAKE_CXX_STANDARD 11)

add_executable(House main.cpp Furniture.cpp Furniture.h Room.cpp Room.h)