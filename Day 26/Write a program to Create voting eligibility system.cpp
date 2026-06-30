#include <iostream>

int main() {
    const int votingAge = 18;
    int age = 0;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= votingAge) {
        std::cout << "You are eligible to vote!" << std::endl;
    } else {
        int yearsLeft = votingAge - age;
        std::cout << "You are not eligible to vote yet." << std::endl;
        std::cout << "You need to wait " << yearsLeft << " more year(s)." << std::endl;
    }

    return 0;
}
