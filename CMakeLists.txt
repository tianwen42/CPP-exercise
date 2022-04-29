project(CPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(main main.cpp)
add_executable(CMakeLists CMakeLists.txt CppBasic/VirtualFuction.h CppBasic/operator.h)
add_executable(main2 search.cpp)
add_executable(leetcode leetcode.cpp)
add_executable(test test.cpp)
add_executable(unordered_map_use BestWayUseways/unordered_map_use.cpp)