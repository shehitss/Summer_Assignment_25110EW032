#include <iostream>
#include <string>
#include <vector>

bool isAnagram(const std::string& str1, const std::string& str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    std::vector<int> count(256, 0);

    for (size_t i = 0; i < str1.length(); i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string string1, string2;

    std::cout << "Enter first string: ";
    std::cin >> string1;

    std::cout << "Enter second string: ";
    std::cin >> string2;

    if (isAnagram(string1, string2)) {
        std::cout << "The strings are anagrams." << std::endl;
    } else {
        std::cout << "The strings are not anagrams." << std::endl;
    }

    return 0;
}
