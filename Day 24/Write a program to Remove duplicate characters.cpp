#include <iostream>
#include <string>

std::string removeDuplicates(const std::string& str) {
    std::string result = "";
    bool seen[256] = {false};

    for (char c : str) {
        unsigned char index = static_cast<unsigned char>(c);
        if (!seen[index]) {
            seen[index] = true;
            result += c;
        }
    }

    return result;
}

int main() {
    std::string input = "programming";
    std::string cleanString = removeDuplicates(input);

    std::cout << "Original: " << input << std::endl;
    std::cout << "Result:   " << cleanString << std::endl;

    return 0;
}
