#include <iostream>
#include <vector>
#include <string>

struct Item {
    int id;
    std::string name;
    int quantity;
    double price;
};

int main() {
    std::vector<Item> inventory;
    int choice = 0;
    const int LOW_STOCK_THRESHOLD = 5;

    while (choice != 5) {
        std::cout << "\n=== Inventory Management System ===" << std::endl;
        std::cout << "1. Add New Item" << std::endl;
        std::cout << "2. Display Current Stock" << std::endl;
        std::cout << "3. Update Stock Quantity" << std::endl;
        std::cout << "4. View Low Stock Alerts" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            Item newItem;
            std::cout << "Enter Item ID: ";
            std::cin >> newItem.id;
            std::cin.ignore();
            std::cout << "Enter Item Name: ";
            std::getline(std::cin, newItem.name);
            std::cout << "Enter Initial Quantity: ";
            std::cin >> newItem.quantity;
            std::cout << "Enter Unit Price: $";
            std::cin >> newItem.price;

            inventory.push_back(newItem);
            std::cout << "Item added to inventory successfully!" << std::endl;

        } else if (choice == 2) {
            if (inventory.empty()) {
                std::cout << "The inventory database is empty." << std::endl;
            } else {
                std::cout << "\n--- Current Inventory Status ---" << std::endl;
                for (const auto& item : inventory) {
                    std::cout << "ID: " << item.id 
                              << " | Name: " << item.name 
                              << " | Qty: " << item.quantity 
                              << " | Price: $" << item.price 
                              << " | Total Value: $" << (item.quantity * item.price) << std::endl;
                }
            }

        } else if (choice == 3) {
            int searchId;
            std::cout << "Enter Item ID to update: ";
            std::cin >> searchId;

            bool found = false;
            for (auto& item : inventory) {
                if (item.id == searchId) {
                    found = true;
                    int adjustment;
                    std::cout << "Current Quantity: " << item.quantity << std::endl;
                    std::cout << "Enter quantity adjustment (positive for restock, negative for sales): ";
                    std::cin >> adjustment;

                    if (item.quantity + adjustment < 0) {
                        std::cout << "Error: Out of stock! Cannot complete this transaction." << std::endl;
                    } else {
                        item.quantity += adjustment;
                        std::cout << "Stock quantity updated! New Quantity: " << item.quantity << std::endl;
                    }
                    break;
                }
            }
            if (!found) {
                std::cout << "Item with ID " << searchId << " not found." << std::endl;
            }

        } else if (choice == 4) {
            bool lowStockFound = false;
            std::cout << "\n--- Low Stock Alerts (Qty < " << LOW_STOCK_THRESHOLD << ") ---" << std::endl;
            for (const auto& item : inventory) {
                if (item.quantity < LOW_STOCK_THRESHOLD) {
                    std::cout << "ALERT! ID: " << item.id << " | Name: " << item.name << " | Remaining Qty: " << item.quantity << std::endl;
                    lowStockFound = true;
                }
            }
            if (!lowStockFound) {
                std::cout << "All items are sufficiently stocked." << std::endl;
            }

        } else if (choice == 5) {
            std::cout << "Exiting inventory system. Goodbye!" << std::endl;

        } else {
            std::cout << "Invalid choice. Please select an option between 1 and 5." << std::endl;
        }
    }

    return 0;
}
