#include <iostream>
#include <vector>
#include <string>

struct Book {
    int id;
    std::string title;
    std::string author;
    bool isIssued;
};

int main() {
    std::vector<Book> catalog;
    int choice = 0;

    while (choice != 5) {
        std::cout << "\n=== Library Management System ===" << std::endl;
        std::cout << "1. Add New Book" << std::endl;
        std::cout << "2. Display Catalog" << std::endl;
        std::cout << "3. Issue Book" << std::endl;
        std::cout << "4. Return Book" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            Book newBook;
            std::cout << "Enter Book ID: ";
            std::cin >> newBook.id;
            std::cin.ignore();
            std::cout << "Enter Book Title: ";
            std::getline(std::cin, newBook.title);
            std::cout << "Enter Author Name: ";
            std::getline(std::cin, newBook.author);
            newBook.isIssued = false;

            catalog.push_back(newBook);
            std::cout << "Book added to catalog successfully!" << std::endl;

        } else if (choice == 2) {
            if (catalog.empty()) {
                std::cout << "The library catalog is empty." << std::endl;
            } else {
                std::cout << "\n--- Book Catalog ---" << std::endl;
                for (const auto& book : catalog) {
                    std::cout << "ID: " << book.id 
                              << " | Title: " << book.title 
                              << " | Author: " << book.author 
                              << " | Status: " << (book.isIssued ? "Checked Out" : "Available") 
                              << std::endl;
                }
            }

        } else if (choice == 3) {
            int searchId;
            std::cout << "Enter Book ID to issue: ";
            std::cin >> searchId;

            bool found = false;
            for (auto& book : catalog) {
                if (book.id == searchId) {
                    found = true;
                    if (book.isIssued) {
                        std::cout << "Sorry, this book is already checked out." << std::endl;
                    } else {
                        book.isIssued = true;
                        std::cout << "Book issued successfully!" << std::endl;
                    }
                    break;
                }
            }
            if (!found) {
                std::cout << "Book with ID " << searchId << " not found." << std::endl;
            }

        } else if (choice == 4) {
            int searchId;
            std::cout << "Enter Book ID to return: ";
            std::cin >> searchId;

            bool found = false;
            for (auto& book : catalog) {
                if (book.id == searchId) {
                    found = true;
                    if (!book.isIssued) {
                        std::cout << "This book is already present in the library." << std::endl;
                    } else {
                        book.isIssued = false;
                        std::cout << "Book returned successfully!" << std::endl;
                    }
                    break;
                }
            }
            if (!found) {
                std::cout << "Book with ID " << searchId << " not found." << std::endl;
            }

        } else if (choice == 5) {
            std::cout << "Exiting library system. Goodbye!" << std::endl;

        } else {
            std::cout << "Invalid choice. Please select from options 1-5." << std::endl;
        }
    }

    return 0;
}
