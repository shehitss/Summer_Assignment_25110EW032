#include <iostream>
#include <vector>
#include <string>

struct StudentMarksheet {
    int rollNumber;
    std::string name;
    int mathMarks;
    int scienceMarks;
    int englishMarks;

    int calculateTotal() const {
        return mathMarks + scienceMarks + englishMarks;
    }

    double calculatePercentage() const {
        return (calculateTotal() / 300.0) * 100.0;
    }

    std::string determineGrade() const {
        double percentage = calculatePercentage();
        if (percentage >= 90.0) return "A+";
        if (percentage >= 80.0) return "A";
        if (percentage >= 70.0) return "B";
        if (percentage >= 60.0) return "C";
        if (percentage >= 40.0) return "D";
        return "Fail";
    }
};

int main() {
    std::vector<StudentMarksheet> records;
    int choice = 0;

    while (choice != 3) {
        std::cout << "\n=== Marksheet Generation System ===" << std::endl;
        std::cout << "1. Generate New Marksheet" << std::endl;
        std::cout << "2. View All Marksheets" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            StudentMarksheet student;
            std::cout << "Enter Roll Number: ";
            std::cin >> student.rollNumber;
            std::cin.ignore();
            std::cout << "Enter Student Name: ";
            std::getline(std::cin, student.name);
            std::cout << "Enter Marks for Mathematics (out of 100): ";
            std::cin >> student.mathMarks;
            std::cout << "Enter Marks for Science (out of 100): ";
            std::cin >> student.scienceMarks;
            std::cout << "Enter Marks for English (out of 100): ";
            std::cin >> student.englishMarks;

            records.push_back(student);
            std::cout << "Marksheet record created successfully!" << std::endl;

        } else if (choice == 2) {
            if (records.empty()) {
                std::cout << "No marksheets found in the system." << std::endl;
            } else {
                for (const auto& student : records) {
                    std::cout << "\n========================================" << std::endl;
                    std::cout << "              REPORT CARD               " << std::endl;
                    std::cout << "========================================" << std::endl;
                    std::cout << "Roll No: " << student.rollNumber << "\tName: " << student.name << std::endl;
                    std::cout << "----------------------------------------" << std::endl;
                    std::cout << "Subject        Maximum Marks   Obtained " << std::endl;
                    std::cout << "----------------------------------------" << std::endl;
                    std::cout << "Mathematics    100             " << student.mathMarks << std::endl;
                    std::cout << "Science        100             " << student.scienceMarks << std::endl;
                    std::cout << "English        100             " << student.englishMarks << std::endl;
                    std::cout << "----------------------------------------" << std::endl;
                    std::cout << "Total Marks:   300             " << student.calculateTotal() << std::endl;
                    std::cout << "Percentage:    " << student.calculatePercentage() << "%" << std::endl;
                    std::cout << "Final Grade:   " << student.determineGrade() << std::endl;
                    std::cout << "========================================" << std::endl;
                }
            }

        } else if (choice == 3) {
            std::cout << "Exiting system. Goodbye!" << std::endl;

        } else {
            std::cout << "Invalid choice. Please pick an option from 1 to 3." << std::endl;
        }
    }

    return 0;
}
