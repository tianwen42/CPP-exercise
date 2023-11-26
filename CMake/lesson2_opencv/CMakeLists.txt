include_directories("D:/Env/opencv/build/include")

add_executable(lesson2_opencv main.cpp)

target_link_libraries(lesson2_opencv "D:/Env/opencv/build/x64/vc16/lib/opencv_world480d.lib")
