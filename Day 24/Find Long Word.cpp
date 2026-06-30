#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::stringstream ss(sentence);
    std::string word;
    std::string longestWord = "";

    while (ss >> word) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }

    if (longestWord.empty()) {
        std::cout << "No words found." << std::endl;
    } else {
        std::cout << "The longest word is: \"" << longestWord << "\"" << std::endl;
        std::cout << "Length: " << longestWord.length() << " characters" << std::endl;
    }

    return 0;
}
