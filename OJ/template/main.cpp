#include <iostream>
#include <list>
#include <map>
#include <string>
#include <type_traits>
#include <variant>
#include <vector>

// 通用的打印函数，适用于大多数 STL 容器
template <typename Container>
void printContainer(const Container& container);

template <typename T>
void PrintSTLContainer(const std::vector<T>& vec) {
    for (const T& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void PrintSTLContainer(const std::list<T>& lst) {
    for (const T& elem : lst) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

// 特化模板以处理 std::pair 类型
template <typename K, typename V>
void printNestedContainer(const std::pair<K, V>& pair) {
    std::cout << pair.first << ": ";
    printContainer(pair.second);
}

// 特化模板以处理非嵌套容器
template <typename T>
void printNestedContainer(const T& element) {
    std::cout << element << " ";
}

template <typename Container>
void printContainer(const Container& container) {
    for (const auto& element : container) {
        printNestedContainer(element);
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> intVector = {1, 2, 3, 4, 5};
    std::vector<std::string> stringVector = {"apple", "banana", "cherry"};
    std::map<std::string,
             std::variant<std::string, int, std::vector<std::string>>>
        mp = {{"apple", std::string("a")},
              {"banana", 3},
              {"cherry", std::vector<std::string>{"red", "ripe"}}};
    std::map<std::string, int> mp2 = {{"banana", 3}};

    // PrintSTLContainer(intVector);
    // PrintSTLContainer(stringVector);
    printContainer(mp);

    return 0;
}