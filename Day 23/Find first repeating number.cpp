#include <iostream>
#include <unordered_set>
#include <string>

char getFirstRepeatingChar(const std::string& s) {
    std::unordered_set<char> seen;
    for (char c : s) {
        if (seen.find(c) != seen.end()) {
            return c;
        }
        seen.insert(c);
    }
    return '\0'; 
}

int main() {
    std::string str = "programming";
    char result = getFirstRepeatingChar(str);
    if (result != '\0') {
        std::cout << "First repeating character: " << result << std::endl;
    } else {
        std::cout << "No repeating character found." << std::endl;
    }
    return 0;
}
