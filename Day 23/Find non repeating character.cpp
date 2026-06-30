#include <iostream>
#include <string>
#include <vector>

char findFirstNonRepeating(const std::string& s) {
    std::vector<int> freq(256, 0);
    
    for (char c : s) {
        freq[static_cast<unsigned char>(c)]++;
    }
    
    for (char c : s) {
        if (freq[static_cast<unsigned char>(c)] == 1) {
            return c;
        }
    }
    
    return '$';
}

int main() {
    std::string s = "geeksforgeeks";
    char result = findFirstNonRepeating(s);
    
    if (result != '$') {
        std::cout << "The first non-repeating character is: " << result << std::endl;
    } else {
        std::cout << "All characters are repeating." << std::endl;
    }
    
    return 0;
}
