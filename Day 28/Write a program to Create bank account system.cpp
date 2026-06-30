#include <iostream>
#include <vector>
#include <string>

struct BankAccount {
    int accountNumber;
    std::string accountHolder;
    double balance;
};

int main() {
    std::vector<BankAccount> accounts;
    int choice = 0;

    while (choice != 5) {
        std::cout << "\n=== Core Banking System ===" << std::endl;
        std::cout << "1. Open New Account" << std::endl;
        std::cout << "2. Deposit Funds" << std::endl;
        std::cout << "3. Withdraw Funds" << std::endl;
        std::cout << "4. Display Account Details" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            BankAccount newAcc;
            std::cout << "Enter New Account Number: ";
            std::cin >> newAcc.accountNumber;
            std::cin.ignore();
            std::cout << "Enter Account Holder Name: ";
            std::getline(std::cin, newAcc.accountHolder);
            std::cout << "Enter Initial Deposit Amount: $";
            std::cin >> newAcc.balance;

            accounts.push_back(newAcc);
            std::cout << "Account created successfully!" << std::endl;

        } else if (choice == 2) {
            int searchId;
            double amount;
            std::cout << "Enter Account Number: ";
            std::cin >> searchId;

            bool found = false;
            for (auto& acc : accounts) {
                if (acc.accountNumber == searchId) {
                    found = true;
                    std::cout << "Enter Deposit Amount: $";
                    std::cin >> amount;
                    if (amount > 0) {
                        acc.balance += amount;
                        std::cout << "Deposited successfully! New Balance: $" << acc.balance << std::endl;
                    } else {
                        std::cout << "Invalid deposit amount." << std::endl;
                    }
                    break;
                }
            }
            if (!found) {
                std::cout << "Account not found." << std::endl;
            }

        } else if (choice == 3) {
            int searchId;
            double amount;
            std::cout << "Enter Account Number: ";
            std::cin >> searchId;

            bool found = false;
            for (auto& acc : accounts) {
                if (acc.accountNumber == searchId) {
                    found = true;
                    std::cout << "Enter Withdrawal Amount: $";
                    std::cin >> amount;
                    if (amount > acc.balance) {
                        std::cout << "Transaction Denied! Insufficient funds." << std::endl;
                    } else if (amount <= 0) {
                        std::cout << "Invalid withdrawal amount." << std::endl;
                    } else {
                        acc.balance -= amount;
                        std::cout << "Withdrawn successfully! Remaining Balance: $" << acc.balance << std::endl;
                    }
                    break;
                }
            }
            if (!found) {
                std::cout << "Account not found." << std::endl;
            }

        } else if (choice == 4) {
            int searchId;
            std::cout << "Enter Account Number: ";
            std::cin >> searchId;

            bool found = false;
            for (const auto& acc : accounts) {
                if (acc.accountNumber == searchId) {
                    found = true;
                    std::cout << "\n--- Account Details ---" << std::endl;
                    std::cout << "Account Number: " << acc.accountNumber << std::endl;
                    std::cout << "Holder Name:    " << acc.accountHolder << std::endl;
                    std::cout << "Current Balance: $" << acc.balance << std::endl;
                    break;
                }
            }
            if (!found) {
                std::cout << "Account not found." << std::endl;
            }

        } else if (choice == 5) {
            std::cout << "Exiting bank system. Thank you!" << std::endl;

        } else {
            std::cout << "Invalid selection. Please choose an option from 1 to 5." << std::endl;
        }
    }

    return 0;
}
