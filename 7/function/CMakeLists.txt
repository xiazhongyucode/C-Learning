cmake_minimum_required(VERSION 3.24)
project(function C)

set(CMAKE_C_STANDARD 11)

add_executable(function main.c func.c func.h)
