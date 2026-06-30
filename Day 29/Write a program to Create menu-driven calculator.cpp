#include <iostream>

int main() {
    int choice = 0;
    double num1 = 0.0;
    double num2 = 0.0;

    while (choice != 5) {
        std::cout << "\n=== Menu-Driven Calculator ===" << std::endl;
        std::cout << "1. Addition (+)" << std::endl;
        std::cout << "2. Subtraction (-)" << std::endl;
        std::cout << "3. Multiplication (*)" << std::endl;
        std::cout << "4. Division (/)" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice (1-5): ";
        std::cin >> choice;

        if (choice >= 1 && choice <= 4) {
            std::cout << "Enter first number: ";
            std::cin >> num1;
            std::cout << "Enter second number: ";
            std::cin >> num2;
        }

        switch (choice) {
            case 1:
                std::cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << std::endl;
                break;
            case 2:
                std::cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << std::endl;
                break;
            case 3:
                std::cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << std::endl;
                break;
            case 4:
                if (num2 != 0.0) {
                    std::cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << std::endl;
                } else {
                    std::cout << "Error: Division by zero is undefined!" << std::endl;
                }
                break;
            case 5:
                std::cout << "Exiting calculator. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please select an option between 1 and 5." << std::endl;
        }
    }

    return 0;
}
