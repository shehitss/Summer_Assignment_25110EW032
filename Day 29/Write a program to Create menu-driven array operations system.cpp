#include <iostream>

void displayArray(int arr[], int size) {
    if (size == 0) {
        std::cout << "Array is empty." << std::endl;
        return;
    }
    std::cout << "Current Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int MAX_CAPACITY = 100;
    int arr[MAX_CAPACITY];
    int size = 0;
    int choice = 0;

    while (choice != 5) {
        std::cout << "\n=== Array Operations System ===" << std::endl;
        std::cout << "1. Insert Element" << std::endl;
        std::cout << "2. Delete Element by Position" << std::endl;
        std::cout << "3. Search Element" << std::endl;
        std::cout << "4. Display Array" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            if (size >= MAX_CAPACITY) {
                std::cout << "Error: Array capacity reached overflow limit!" << std::endl;
            } else {
                int element;
                std::cout << "Enter element to insert at the end: ";
                std::cin >> element;
                arr[size] = element;
                size++;
                std::cout << "Element inserted successfully!" << std::endl;
            }

        } else if (choice == 2) {
            if (size == 0) {
                std::cout << "Error: Underflow! Array is empty." << std::endl;
            } else {
                int position;
                std::cout << "Enter position to delete (0 to " << (size - 1) << "): ";
                std::cin >> position;

                if (position < 0 || position >= size) {
                    std::cout << "Invalid position target!" << std::endl;
                } else {
                    for (int i = position; i < size - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    size--;
                    std::cout << "Element deleted successfully!" << std::endl;
                }
            }

        } else if (choice == 3) {
            if (size == 0) {
                std::cout << "Array is empty. Nothing to search." << std::endl;
            } else {
                int target;
                std::cout << "Enter element value to find: ";
                std::cin >> target;

                int foundIndex = -1;
                for (int i = 0; i < size; i++) {
                    if (arr[i] == target) {
                        foundIndex = i;
                        break;
                    }
                }

                if (foundIndex != -1) {
                    std::cout << "Element found at index position: " << foundIndex << std::endl;
                } else {
                    std::cout << "Element not found in the array." << std::endl;
                }
            }

        } else if (choice == 4) {
            displayArray(arr, size);

        } else if (choice == 5) {
            std::cout << "Exiting system. Goodbye!" << std::endl;

        } else {
            std::cout << "Invalid selection! Please enter an option from 1 to 5." << std::endl;
        }
    }

    return 0;
}
