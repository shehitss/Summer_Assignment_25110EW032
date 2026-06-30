#include <iostream>
#include <string>

char getMaxOccurringChar(const std::string& str) {
    int freq[256] = {0};
    int maxCount = 0;
    char maxChar = ' ';

    for (char ch : str) {
        freq[static_cast<unsigned char>(ch)]++;
    }

    for (char ch : str) {
        if (freq[static_cast<unsigned char>(ch)] > maxCount) {
            maxCount = freq[static_cast<unsigned char>(ch)];
            maxChar = ch;
        }
    }

    return maxChar;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    if (str.empty()) {
        std::cout << "String is empty." << std::endl;
        return 0;
    }

    char maxChar = getMaxOccurringChar(str);
    std::cout << "Maximum occurring character: " << maxChar << std::endl;

    return 0;
}
