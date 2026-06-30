#include <iostream>
#include <vector>
#include <string>

struct SalaryRecord {
    int employeeId;
    std::string employeeName;
    double baseSalary;
    double bonus;
    double taxRate; 

    double calculateNetSalary() const {
        double gross = baseSalary + bonus;
        double taxAmount = gross * taxRate;
        return gross - taxAmount;
    }
};

int main() {
    std::vector<SalaryRecord> payroll;
    int choice = 0;

    while (choice != 4) {
        std::cout << "\n=== Salary Management System ===" << std::endl;
        std::cout << "1. Generate New Salary Slip" << std::endl;
        std::cout << "2. View All Pay Slips" << std::endl;
        std::cout << "3. View Total Company Expenditure" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (choice == 1) {
            SalaryRecord record;
            std::cout << "Enter Employee ID: ";
            std::cin >> record.employeeId;
            std::cin.ignore();
            std::cout << "Enter Employee Name: ";
            std::getline(std::cin, record.employeeName);
            std::cout << "Enter Base Salary: $";
            std::cin >> record.baseSalary;
            std::cout << "Enter Performance Bonus: $";
            std::cin >> record.bonus;
            std::cout << "Enter Tax Deduction Rate (e.g., 0.15 for 15%): ";
            std::cin >> record.taxRate;

            payroll.push_back(record);
            std::cout << "Salary record processed successfully!" << std::endl;

        } else if (choice == 2) {
            if (payroll.empty()) {
                std::cout << "No salary records found." << std::endl;
            } else {
                for (const auto& record : payroll) {
                    double gross = record.baseSalary + record.bonus;
                    double taxAmount = gross * record.taxRate;
                    
                    std::cout << "\n----------------------------------------" << std::endl;
                    std::cout << "PAY SLIP FOR: " << record.employeeName << " (ID: " << record.employeeId << ")" << std::endl;
                    std::cout << "----------------------------------------" << std::endl;
                    std::cout << "Base Salary:        $" << record.baseSalary << std::endl;
                    std::cout << "Bonus Incentives:   $" << record.bonus << std::endl;
                    std::cout << "Gross Earnings:     $" << gross << std::endl;
                    std::cout << "Tax Deductions:     $" << taxAmount << " (" << (record.taxRate * 100) << "%)" << std::endl;
                    std::cout << "Net Take-Home Pay:  $" << record.calculateNetSalary() << std::endl;
                    std::cout << "----------------------------------------" << std::endl;
                }
            }

        } else if (choice == 3) {
            double totalGross = 0.0;
            double totalNet = 0.0;
            
            for (const auto& record : payroll) {
                totalGross += (record.baseSalary + record.bonus);
                totalNet += record.calculateNetSalary();
            }

            std::cout << "\n=== Financial Summary ===" << std::endl;
            std::cout << "Total Gross Payroll Obligation: $" << totalGross << std::endl;
            std::cout << "Total Disbursed Net Salaries:   $" << totalNet << std::endl;
            std::cout << "Total Government Tax Remitted:  $" << (totalGross - totalNet) << std::endl;

        } else if (choice == 4) {
            std::cout << "Exiting system. Goodbye!" << std::endl;
            
        } else {
            std::cout << "Invalid choice. Please select from options 1-4." << std::endl;
        }
    }

    return 0;
}
