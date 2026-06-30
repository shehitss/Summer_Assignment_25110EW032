#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> words = {"elephant", "cat", "dog", "banana", "hi", "apple"};

    std::sort(words.begin(), words.end(), [](const std::string& a, const std::string& b) {
        return a.length() < b.length();
    });

    for (const std::string& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}
