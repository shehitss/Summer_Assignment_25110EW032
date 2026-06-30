#include <iostream>
#include <string>

struct MiniEmployee {
    int id;
    std::string name;
    std::string role;
};

int main() {
    const int MAX_EMPLOYEES = 30;
    MiniEmployee directory[MAX_EMPLOYEES];
    int employeeCount = 0;
    int choice = 0;

    while (choice != 4) {
        std::cout << "\n=== Mini Employee Management System ===" << std::endl;
        std::cout << "1. Register New Employee" << std::endl;
        std::cout << "2. Display Staff Directory" << std::endl;
        std::cout << "3. Search Employee by ID" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            if (employeeCount >= MAX_EMPLOYEES) {
                std::cout << "Directory Full! Cannot register more employees." << std::endl;
            } else {
                std::cout << "Enter Employee ID: ";
                std::cin >> directory[employeeCount].id;
                std::cin.ignore();
                
                std::cout << "Enter Employee Name: ";
                std::getline(std::cin, directory[employeeCount].name);
                
                std::cout << "Enter Job Role/Title: ";
                std::getline(std::cin, directory[employeeCount].role);
                
                employeeCount++;
                std::cout << "Employee registered successfully!" << std::endl;
            }

        } else if (choice == 2) {
            if (employeeCount == 0) {
                std::cout << "The directory is currently empty." << std::endl;
            } else {
                std::cout << "\n--- Staff Directory ---" << std::endl;
                for (int i = 0; i < employeeCount; i++) {
                    std::cout << "ID: " << directory[i].id 
                              << " | Name: " << directory[i].name 
                              << " | Role: " << directory[i].role << std::endl;
                }
            }

        } else if (choice == 3) {
            if (employeeCount == 0) {
                std::cout << "Directory is empty. Nothing to search." << std::endl;
            } else {
                int searchId;
                std::cout << "Enter Employee ID to find: ";
                std::cin >> searchId;
                
                bool found = false;
                for (int i = 0; i < employeeCount; i++) {
                    if (directory[i].id == searchId) {
                        std::cout << "\nEmployee Record Found!" << std::endl;
                        std::cout << "ID:   " << directory[i].id << std::endl;
                        std::cout << "Name: " << directory[i].name << std::endl;
                        std::cout << "Role: " << directory[i].role << std::endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Employee with ID " << searchId << " not found." << std::endl;
                }
            }

        } else if (choice == 4) {
            std::cout << "Exiting system. Goodbye!" << std::endl;

        } else {
            std::cout << "Invalid menu option! Please select between 1 and 4." << std::endl;
        }
    }

    return 0;
}
