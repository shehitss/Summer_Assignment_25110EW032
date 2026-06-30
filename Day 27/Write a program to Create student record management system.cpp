#include <iostream>
#include <vector>
#include <string>

struct Student {
    int id;
    std::string name;
    double gpa;
};

int main() {
    std::vector<Student> database;
    int choice = 0;

    while (choice != 4) {
        std::cout << "\n=== Student Record Management System ===" << std::endl;
        std::cout << "1. Add Student Record" << std::endl;
        std::cout << "2. Display All Records" << std::endl;
        std::cout << "3. Search Student by ID" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            Student newStudent;
            std::cout << "Enter Student ID: ";
            std::cin >> newStudent.id;
            std::cin.ignore();
            std::cout << "Enter Student Name: ";
            std::getline(std::cin, newStudent.name);
            std::cout << "Enter Student GPA: ";
            std::cin >> newStudent.gpa;
            
            database.push_back(newStudent);
            std::cout << "Record added successfully!" << std::endl;

        } else if (choice == 2) {
            if (database.empty()) {
                std::cout << "No student records found." << std::endl;
            } else {
                std::cout << "\n--- Student Records ---" << std::endl;
                for (const auto& student : database) {
                    std::cout << "ID: " << student.id 
                              << " | Name: " << student.name 
                              << " | GPA: " << student.gpa << std::endl;
                }
            }

        } else if (choice == 3) {
            int searchId;
            std::cout << "Enter Student ID to search: ";
            std::cin >> searchId;
            
            bool found = false;
            for (const auto& student : database) {
                if (student.id == searchId) {
                    std::cout << "\nRecord Found!" << std::endl;
                    std::cout << "ID: " << student.id << std::endl;
                    std::cout << "Name: " << student.name << std::endl;
                    std::cout << "GPA: " << student.gpa << std::endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                std::cout << "Student with ID " << searchId << " not found." << std::endl;
            }

        } else if (choice == 4) {
            std::cout << "Exiting system. Goodbye!" << std::endl;
            
        } else {
            std::cout << "Invalid choice. Please pick a number from 1 to 4." << std::endl;
        }
    }

    return 0;
}
