## 概述

CMake是一种开源的、跨平台的自动化构建系统，主要用于管理和构建软件项目。它通过使用编译器无关的方法生成各种平台的构建文件，如Makefile或Visual Studio项目文件。CMake本身并不是一个构建系统，而是一个构建系统生成器。以下是对CMake的详细介绍：

### CMake的主要功能

1. **跨平台支持**：CMake能够在不同操作系统（如Windows、Linux、macOS）上生成适合的构建文件。
2. **编译器无关**：CMake不依赖于特定的编译器，能够支持多种编译器和工具链。
3. **多层目录支持**：CMake可以处理复杂的项目结构，包括多层目录、多个应用程序和多个库。
4. **自动化构建**：CMake能够自动生成构建脚本，简化了手动编写Makefile等构建文件的过程。
5. **测试和打包**：CMake还支持项目的测试和打包功能，帮助开发者进行项目的全面管理。

###  CMake的使用场景

\- **大型项目管理**：对于包含多个源文件、头文件和第三方库的大型项目，CMake能够简化构建过程。

\- **跨平台开发**：开发需要在多个平台上运行的软件时，CMake能够生成适合各平台的构建文件。

\- **自动化测试**：通过CMake的测试功能，可以方便地进行自动化测试，提高代码质量。

###  CMake的工作原理

CMake通过读取项目目录中的`CMakeLists.txt`文件，根据其中的配置生成适合目标平台的构建文件。主要工作流程如下：

1. **编写CMakeLists.txt文件**：在项目的根目录以及各子目录中编写CMakeLists.txt文件，描述项目的结构、依赖关系和编译规则。
2. **运行CMake命令**：在命令行中运行`cmake`命令，CMake会解析CMakeLists.txt文件并生成相应的构建文件。
3. **构建项目**：使用生成的构建文件（如Makefile或Visual Studio解决方案）进行项目的编译、链接和打包。

> 参考来源
>
> \- [CMake - 维基百科](https://zh.wikipedia.org/zh-hans/CMake)
>
> \- [CMake是什么？有什么用？ - CSDN博客](https://blog.csdn.net/Torres_10/article/details/80371425)
>
> \- [CMake - 官方网站](https://cmake.org/about/)

通过这些来源，可以更详细地了解CMake的功能和使用方法。如果你是开发者，推荐阅读CMake的官方文档和相关教程，以便更好地掌握这一工具。

### 头文件和源文件

> 头文件.h 包含了函数声明
>
> 源文件.cpp包含了函数实现
>
> 引入头文件可以减少调用而声明次数，N个cpp调用100个函数，只需要在这些cpp文件中引入头文件即可，**编译前展开头文件**

## 编译过程

预处理-编译-汇编-链接-装入

#### 指定Cmake版本/项目名

> ```cmake
> # CMake的最小版本要求
> cmake_minimum_required(VERSION 3.0.0)
> # 项目名称以及版本号
> project(demo VERSION 0.1.0)
> # 显式要求指明支持C++标准
> set(CMAKE_CXX_STANDARD_REQUIRED True)
> # 启动对C11标准的支持
> # set(CMAKE_C_STANDARD 11)
> ```



#### 静态/动态库编译

> ```cmake
> •add_library(test STATIC source1.cpp source2.cpp) # 生成静态库 libtest.a
> 
> •add_library(test SHARED source1.cpp source2.cpp) # 生成动态库 libtest.so
> ```



#### 可执行文件生成

> ```cmake
> add_executable(a.out main.cpp)
> ```



#### 链接Linker

> ```cmake
> target_link_libraries(myexec PUBLIC test) # 为 myexec 链接刚刚制作的库 libtest.a
> ```

## 头文件

1. 如果源文件中使用双引号来包含头文件，则首先在源文件**当前目录**查找头文件。 
2. 如果编译时使用"-I/some/dir"，则在**编译命令指定目录**中查找。
3. 如果设置了环境变量C_INCLUDE_PATH，则在**指定的目录**中查找。
4. 最后在**编译器预设的路径**中查找，这是不需要指定的，编译时一定会在该路径中搜索所需的头文件。

> **源文件当前目录---->编译命令指定目录--->系统预设目录--->编译器预设**

```c++
#pragma once  //头文件多次引入的时候只展开一次
```



#### cmake改变了头文件引入方式

```
E:.
├─main.cpp
├─CMakeLists.txt
├─hellolob
│  ├─CMakeLists.txt
│  ├─hello.cpp
│  ├─hello.h
```

通过与main的同级CMakeLists.txt 配置之后main.cpp可以直接引用hello模块

```c++
\#include <cstdio>
\#include <hello.h>
int main() {
  hello();
  return 0;
}
```

> ```cmake
> target_link_libraries(a.out PUBLIC hello)
> target_include_directories(a.out PUBLIC hello)
> ```



`target_link_libraries()`和`target_include_directories()`都是CMake中的命令，以处理编译过程中的不同环节。让我们来具体解释这两个命令的不同：

> - `target_link_libraries()`命令是用于指定构建目标（例如一个可执行文件或库）**在链接阶段应链接哪些库**。该命令定义了目标需要的外部库或者模块，CMake将这些信息用来在链接过程中添加适当的 -l 标志。
> - `target_include_directories()`命令用于在编译阶段指定目标的包含目录。这些信息**让编译器知道在哪里可以找到需要的头文件**。这些信息将被用来添加适当的 -I 标志。

`target_include_directories()`影响**编译阶段**的行为，它影响编译器是否能找到`.h`或者`.hpp`这样的头文件。

而`target_link_libraries()`影响**链接阶段**的行为，它影响连接器是否能找到正确的库来链接。

这也与C++编译的两个主要步骤相吻合：编译步骤负责将源代码文件转换为目标文件，而链接步骤则将这些目标文件组合成可执行程序或库。这两个命令分别关注这两个步骤的不同方面。

































