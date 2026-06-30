#include <iostream>

int main() {
    double balance = 1000.00;
    int choice = 0;
    double amount = 0.0;

    std::cout << "--- Welcome to the ATM ---" << std::endl;

    while (choice != 4) {
        std::cout << "\n1. Check Balance" << std::endl;
        std::cout << "2. Deposit Money" << std::endl;
        std::cout << "3. Withdraw Money" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Your current balance is: $" << balance << std::endl;
                break;
            case 2:
                std::cout << "Enter deposit amount: $";
                std::cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    std::cout << "Successfully deposited $" << amount << std::endl;
                } else {
                    std::cout << "Invalid deposit amount." << std::endl;
                }
                break;
            case 3:
                std::cout << "Enter withdrawal amount: $";
                std::cin >> amount;
                if (amount > balance) {
                    std::cout << "Insufficient funds!" << std::endl;
                } else if (amount <= 0) {
                    std::cout << "Invalid withdrawal amount." << std::endl;
                } else {
                    balance -= amount;
                    std::cout << "Successfully withdrew $" << amount << std::endl;
                }
                break;
            case 4:
                std::cout << "Thank you for using our ATM. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
