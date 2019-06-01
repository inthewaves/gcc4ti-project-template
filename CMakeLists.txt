cmake_minimum_required(VERSION 3.14)
project(gcc4ti_project_template C)

set(CMAKE_C_STANDARD 99)

add_executable(gcc4ti_project_template hello.c)

include_directories($ENV{TIGCC}/include/c)