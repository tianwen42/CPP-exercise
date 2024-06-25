#include <iostream>
#include <vector>

int main() {
    // Low-level programming
    int number = 42;
    int* ptr_number = &number;

    // High-level programming
    std::vector<int> num{1, 2, 3, 4, 5, 6, 7, 8};
    for (const auto& i : num) {
        std::cout << i << " ";
    }
}