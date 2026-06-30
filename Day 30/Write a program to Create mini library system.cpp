#include <iostream>
#include <string>

struct MiniBook {
    int bookId;
    std::string title;
    bool isBorrowed;
};

int main() {
    const int MAX_BOOKS = 50;
    MiniBook library[MAX_BOOKS];
    int bookCount = 0;
    int choice = 0;

    while (choice != 4) {
        std::cout << "\n=== Mini Library System ===" << std::endl;
        std::cout << "1. Add Book to Shelf" << std::endl;
        std::cout << "2. Display Shelf Collection" << std::endl;
        std::cout << "3. Checkout / Borrow Book" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            if (bookCount >= MAX_BOOKS) {
                std::cout << "The shelf is completely full!" << std::endl;
            } else {
                std::cout << "Enter unique Book ID: ";
                std::cin >> library[bookCount].bookId;
                std::cin.ignore();
                std::cout << "Enter Book Title: ";
                std::getline(std::cin, library[bookCount].title);
                library[bookCount].isBorrowed = false;
                
                bookCount++;
                std::cout << "Book safely added to the shelf collection." << std::endl;
            }

        } else if (choice == 2) {
            if (bookCount == 0) {
                std::cout << "The library has no books on its shelves right now." << std::endl;
            } else {
                std::cout << "\n--- Current Library Inventory ---" << std::endl;
                for (int i = 0; i < bookCount; i++) {
                    std::cout << "ID: " << library[i].bookId 
                              << " | Title: \"" << library[i].title << "\""
                              << " | Status: " << (library[i].isBorrowed ? "Borrowed" : "On Shelf") 
                              << std::endl;
                }
            }

        } else if (choice == 3) {
            if (bookCount == 0) {
                std::cout << "No books available to borrow." << std::endl;
            } else {
                int searchId;
                std::cout << "Enter Book ID to check out: ";
                std::cin >> searchId;
                
                bool found = false;
                for (int i = 0; i < bookCount; i++) {
                    if (library[i].bookId == searchId) {
                        found = true;
                        if (library[i].isBorrowed) {
                            std::cout << "Sorry, that book is already checked out by someone else." << std::endl;
                        } else {
                            library[i].isBorrowed = true;
                            std::cout << "Success! You have borrowed \"" << library[i].title << "\"." << std::endl;
                        }
                        break;
                    }
                }
                if (!found) {
                    std::cout << "Book ID not found in our catalog registry." << std::endl;
                }
            }

        } else if (choice == 4) {
            std::cout << "Closing the library system. Keep reading!" << std::endl;

        } else {
            std::cout << "Invalid menu item. Please enter a choice between 1 and 4." << std::endl;
        }
    }

    return 0;
}
