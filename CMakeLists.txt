cmake_minimum_required(VERSION 3.22)
project(Algo C)

set(CMAKE_C_STANDARD 17)

add_executable(Algo Non_recursive.c recursive.c algo_head.h non_recursive_main.c recursive_main.c)
