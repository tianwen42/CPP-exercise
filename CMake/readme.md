# 1-1 文件类型
.cpp 代码文件
.h 声明文件

# 1-2 编译过程
预处理-编译-链接-装入

# 2-1 静态链接
静态库 xxx.lib

# 2-1 动态链接
动态库 xxx.dll

ps：关键字[ __declspec(dllexport) int add(int a, int b) ] 提供.lib .dll文件
编译只需要xxx.lib文件，
运行只需要xxx.dll文件
在CMake\build\lesson2_2\Debug路径下有lesson2_2.exe,需要将add_shared.dll复制过去才能运行
- CMAKE_STUDY_API 利用宏定义将dll导出