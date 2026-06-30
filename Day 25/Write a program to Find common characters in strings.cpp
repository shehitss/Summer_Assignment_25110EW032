#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> commonChars(const std::vector<std::string>& words) {
    std::vector<int> minFreq(26, 1e9);

    for (const std::string& word : words) {
        std::vector<int> currentFreq(26, 0);
        for (char c : word) {
            currentFreq[c - 'a']++;
        }
        
        for (int i = 0; i < 26; i++) {
            minFreq[i] = std::min(minFreq[i], currentFreq[i]);
        }
    }

    std::vector<std::string> result;
    for (int i = 0; i < 26; i++) {
        while (minFreq[i] > 0 && minFreq[i] != 1e9) {
            result.push_back(std::string(1, 'a' + i));
            minFreq[i]--;
        }
    }

    return result;
}

int main() {
    std::vector<std::string> words = {"bella", "label", "roller"};
    std::vector<std::string> common = commonChars(words);

    std::cout << "[";
    for (size_t i = 0; i < common.size(); i++) {
        std::cout << "\"" << common[i] << "\"";
        if (i < common.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
