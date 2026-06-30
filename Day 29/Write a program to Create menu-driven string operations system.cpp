#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int choice = 0;
    std::string str1 = "";
    std::string str2 = "";

    while (choice != 5) {
        std::cout << "\n=== String Operations System ===" << std::endl;
        std::cout << "1. Concatenate Two Strings" << std::endl;
        std::cout << "2. Reverse a String" << std::endl;
        std::cout << "3. Convert to Uppercase" << std::endl;
        std::cout << "4. Find String Length" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice (1-5): ";
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 1) {
            std::cout << "Enter first string: ";
            std::getline(std::cin, str1);
            std::cout << "Enter second string: ";
            std::getline(std::cin, str2);
            
            std::string result = str1 + str2;
            std::cout << "Concatenated Result: " << result << std::endl;

        } else if (choice == 2) {
            std::cout << "Enter string to reverse: ";
            std::getline(std::cin, str1);
            
            std::string reversedStr = str1;
            std::reverse(reversedStr.begin(), reversedStr.end());
            std::cout << "Reversed String: " << reversedStr << std::endl;

        } else if (choice == 3) {
            std::cout << "Enter string to convert: ";
            std::getline(std::cin, str1);
            
            std::string upperStr = str1;
            for (char &c : upperStr) {
                c = std::toupper(c);
            }
            std::cout << "Uppercase Result: " << upperStr << std::endl;

        } else if (choice == 4) {
            std::cout << "Enter string: ";
            std::getline(std::cin, str1);
            
            std::cout << "Length of the string: " << str1.length() << " characters" << std::endl;

        } else if (choice == 5) {
            std::cout << "Exiting system. Goodbye!" << std::endl;

        } else {
            std::cout << "Invalid choice! Please select an option between 1 and 5." << std::endl;
        }
    }

    return 0;
}
