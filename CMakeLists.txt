cmake_minimum_required(VERSION 3.19)
project(CPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(main main.cpp)
add_executable(CMakeLists CMakeLists.txt CppBasic/VirtualFuction.h CppBasic/operator.h)
add_executable(main2 search.cpp)
add_executable(leetcode leetcode.cpp)
add_executable(test test.cpp)