cmake_minimum_required(VERSION 3.22)
project(ee205_lab08c_all_creatures_big_and_small)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ee205_lab08c_all_creatures_big_and_small
        animal.cpp
        animal.h
        main.cpp)
