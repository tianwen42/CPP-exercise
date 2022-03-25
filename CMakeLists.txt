cmake_minimum_required(VERSION 3.19)
project(CPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(CPP main.cpp _1.h 217_存在重复元素.h 7_整数反转.h _数字对称翻转.h)
add_executable(main main.cpp)
add_executable(CMakeLists CMakeLists.txt)
add_executable(main2 main2.cpp)
add_executable(leetcode leetcode.cpp)