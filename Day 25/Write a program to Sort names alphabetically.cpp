#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> names = {"Zack", "Alice", "Charlie", "Bob", "David"};

    std::sort(names.begin(), names.end());

    for (const std::string& name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}
