#include <iostream>
#include <string>

int main() {
    const int MAX_STUDENTS = 100;
    int studentIDs[MAX_STUDENTS];
    std::string studentNames[MAX_STUDENTS];
    double studentGPAs[MAX_STUDENTS];
    int currentSize = 0;
    int choice = 0;

    while (choice != 4) {
        std::cout << "\n=== Student Record System ===" << std::endl;
        std::cout << "1. Add Student Record" << std::endl;
        std::cout << "2. Display All Records" << std::endl;
        std::cout << "3. Search Student by ID" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            if (currentSize >= MAX_STUDENTS) {
                std::cout << "Database Full! Cannot add more student records." << std::endl;
            } else {
                std::cout << "Enter Student ID: ";
                std::cin >> studentIDs[currentSize];
                std::cin.ignore();
                
                std::cout << "Enter Student Name: ";
                std::getline(std::cin, studentNames[currentSize]);
                
                std::cout << "Enter Student GPA: ";
                std::cin >> studentGPAs[currentSize];
                
                currentSize++;
                std::cout << "Record added successfully!" << std::endl;
            }

        } else if (choice == 2) {
            if (currentSize == 0) {
                std::cout << "The database is empty." << std::endl;
            } else {
                std::cout << "\n--- All Registered Students ---" << std::endl;
                for (int i = 0; i < currentSize; i++) {
                    std::cout << "ID: " << studentIDs[i] 
                              << " | Name: " << studentNames[i] 
                              << " | GPA: " << studentGPAs[i] << std::endl;
                }
            }

        } else if (choice == 3) {
            if (currentSize == 0) {
                std::cout << "Database is empty. Nothing to search." << std::endl;
            } else {
                int searchID;
                std::cout << "Enter Student ID to find: ";
                std::cin >> searchID;
                
                bool found = false;
                for (int i = 0; i < currentSize; i++) {
                    if (studentIDs[i] == searchID) {
                        std::cout << "\nStudent Record Found!" << std::endl;
                        std::cout << "ID:   " << studentIDs[i] << std::endl;
                        std::cout << "Name: " << studentNames[i] << std::endl;
                        std::cout << "GPA:  " << studentGPAs[i] << std::endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Student with ID " << searchID << " not found." << std::endl;
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
