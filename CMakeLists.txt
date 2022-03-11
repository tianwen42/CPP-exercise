cmake_minimum_required(VERSION 3.19)
project(CPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(CPP main.cpp _1.h)
add_executable(main main.cpp)
add_executable(CMakeLists CMakeLists.txt)
add_executable(_1 _1.h)