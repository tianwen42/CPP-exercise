#include <algorithm>  // 各种常用算法
#include <iostream>
#include <iterator>       // 迭代器相关
#include <list>           // 双向链表
#include <map>            // 键-值对的关联容器
#include <queue>          // 队列容器
#include <set>            // 集合容器
#include <stack>          // 栈容器
#include <string>         // string
#include <unordered_map>  // 无序键-值对关联容器
#include <unordered_set>  // 无序集合容器
#include <vector>         // 动态数组

// 通用的打印函数，适用于大多数 STL 容器
// 基本的
// 嵌套的
template <typename Container>
void printContainer(const Container& container);

template <typename T>
void PrintSTLContainer(const std::vector<T>& vec);