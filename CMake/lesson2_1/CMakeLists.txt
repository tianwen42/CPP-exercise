add_subdirectory(add)

include_directories(./lib)

# link_libraries(D:/Github/CPP-exercise/CMake/lesson2_1/lib/add_static.lib)
# 链接文件夹
link_directories(D:/Github/CPP-exercise/CMake/lesson2_1/lib)

add_executable(lesson2_1 main.cpp)

# 链接库名称
target_link_libraries(lesson2_1 add_static.lib)