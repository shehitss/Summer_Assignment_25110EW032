#include <iostream>
#include <string>

bool areRotations(const std::string& str1, const std::string& str2) {
    if (str1.length() != str2.length()) {
        return false;
    }
    
    std::string temp = str1 + str1;
    return (temp.find(str2) != std::string::npos);
}

int main() {
    std::string str1, str2;
    
    if (!(std::cin >> str1 >> str2)) {
        return 0;
    }
    
    if (areRotations(str1, str2)) {
        std::cout << 1 << std::endl;
    } else {
        std::cout << 0 << std::endl;
    }
    
    return 0;
}
