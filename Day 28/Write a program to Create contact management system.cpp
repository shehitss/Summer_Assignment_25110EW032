#include <iostream>
#include <vector>
#include <string>

struct Contact {
    std::string name;
    std::string phoneNumber;
    std::string email;
};

int main() {
    std::vector<Contact> addressBook;
    int choice = 0;

    while (choice != 4) {
        std::cout << "\n=== Contact Management System ===" << std::endl;
        std::cout << "1. Add New Contact" << std::endl;
        std::cout << "2. Display All Contacts" << std::endl;
        std::cout << "3. Search Contact by Name" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            Contact newContact;
            std::cin.ignore();
            std::cout << "Enter Full Name: ";
            std::getline(std::cin, newContact.name);
            std::cout << "Enter Phone Number: ";
            std::getline(std::cin, newContact.phoneNumber);
            std::cout << "Enter Email Address: ";
            std::getline(std::cin, newContact.email);

            addressBook.push_back(newContact);
            std::cout << "Contact saved successfully!" << std::endl;

        } else if (choice == 2) {
            if (addressBook.empty()) {
                std::cout << "Your address book is empty." << std::endl;
            } else {
                std::cout << "\n--- Contact List ---" << std::endl;
                for (const auto& contact : addressBook) {
                    std::cout << "Name: " << contact.name 
                              << " | Phone: " << contact.phoneNumber 
                              << " | Email: " << contact.email << std::endl;
                }
            }

        } else if (choice == 3) {
            std::cin.ignore();
            std::string searchName;
            std::cout << "Enter name to search: ";
            std::getline(std::cin, searchName);

            bool found = false;
            for (const auto& contact : addressBook) {
                if (contact.name == searchName) {
                    std::cout << "\nContact Found!" << std::endl;
                    std::cout << "Name:  " << contact.name << std::endl;
                    std::cout << "Phone: " << contact.phoneNumber << std::endl;
                    std::cout << "Email: " << contact.email << std::endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                std::cout << "No contact found matching \"" << searchName << "\"." << std::endl;
            }

        } else if (choice == 4) {
            std::cout << "Exiting system. Goodbye!" << std::endl;

        } else {
            std::cout << "Invalid choice. Please select an option from 1 to 4." << std::endl;
        }
    }

    return 0;
}
