#include <iostream>
#include <vector>
#include <string>

struct Employee {
    int id;
    std::string name;
    std::string department;
    double salary;
};

int main() {
    std::vector<Employee> staff;
    int choice = 0;

    while (choice != 4) {
        std::cout << "\n=== Employee Management System ===" << std::endl;
        std::cout << "1. Add Employee Record" << std::endl;
        std::cout << "2. Display Staff Directory" << std::endl;
        std::cout << "3. Calculate Total Payroll" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            Employee newEmp;
            std::cout << "Enter Employee ID: ";
            std::cin >> newEmp.id;
            std::cin.ignore();
            std::cout << "Enter Employee Name: ";
            std::getline(std::cin, newEmp.name);
            std::cout << "Enter Department: ";
            std::getline(std::cin, newEmp.department);
            std::cout << "Enter Monthly Salary: $";
            std::cin >> newEmp.salary;

            staff.push_back(newEmp);
            std::cout << "Employee record created successfully!" << std::endl;

        } else if (choice == 2) {
            if (staff.empty()) {
                std::cout << "The staff directory is currently empty." << std::endl;
            } else {
                std::cout << "\n--- Staff Directory ---" << std::endl;
                for (const auto& emp : staff) {
                    std::cout << "ID: " << emp.id 
                              << " | Name: " << emp.name 
                              << " | Dept: " << emp.department 
                              << " | Salary: $" << emp.salary << std::endl;
                }
            }

        } else if (choice == 3) {
            double totalPayroll = 0.0;
            for (const auto& emp : staff) {
                totalPayroll += emp.salary;
            }
            std::cout << "\nTotal Monthly Payroll Expense: $" << totalPayroll << std::endl;

        } else if (choice == 4) {
            std::cout << "Exiting system. Goodbye!" << std::endl;

        } else {
            std::cout << "Invalid selection. Please choose an option from 1 to 4." << std::endl;
        }
    }

    return 0;
}
