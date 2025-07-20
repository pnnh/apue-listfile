cmake_minimum_required(VERSION 3.20)
project(ApueListfile)

set(CMAKE_C_STANDARD 17)

set(CMAKE_VERBOSE_MAKEFILE on)

add_executable(${PROJECT_NAME} listfile/main.c)