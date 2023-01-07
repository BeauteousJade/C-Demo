cmake_minimum_required(VERSION 3.24)
project(C_Demo C)

set(CMAKE_C_STANDARD 11)

add_executable(C_Demo code/main.c code/memory/memoryTest.c code/memory/alloc.h code/memory/alloc.c code/memory/strdupTest.c code/pointer/pointerTest.c code/pointer/funPointerTest.c code/pointer/stringPointerTest.c code/macro/defineTest.c code/ifdef/ifdefTest.h)
