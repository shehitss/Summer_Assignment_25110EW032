//Vehicle Parking Management System

#include <iostream>
#include <string>

const int MAX_SLOTS = 10;

void displayMenu() {
    std::cout << "\n=== MINI PARKING MANAGEMENT SYSTEM ===" << std::endl;
    std::cout << "1. Park a Vehicle" << std::endl;
    std::cout << "2. Check-out/Release Vehicle" << std::endl;
    std::cout << "3. View Parking Slot Status" << std::endl;
    std::cout << "4. Search Vehicle by Plate Number" << std::endl;
    std::cout << "5. Exit System" << std::endl;
    std::cout << "Enter your choice (1-5): ";
}

void initializeSystem(bool isOccupied[], std::string plateNumbers[]) {
    for (int i = 0; i < MAX_SLOTS; i++) {
        isOccupied[i] = false;
        plateNumbers[i] = "";
    }
}

void viewParkingSlots(const bool isOccupied[], const std::string plateNumbers[]) {
    std::cout << "\n--- Current Parking Map ---" << std::endl;
    for (int i = 0; i < MAX_SLOTS; i++) {
        std::cout << "Slot " << (i + 1) << ": ";
        if (isOccupied[i]) {
            std::cout << "[OCCUPIED] - Plate: " << plateNumbers[i] << std::endl;
        } else {
            std::cout << "[AVAILABLE]" << std::endl;
        }
    }
}

void parkVehicle(bool isOccupied[], std::string plateNumbers[]) {
    int targetSlot = -1;
    for (int i = 0; i < MAX_SLOTS; i++) {
        if (!isOccupied[i]) {
            targetSlot = i;
            break;
        }
    }

    if (targetSlot == -1) {
        std::cout << "Error: Parking lot is completely full!" << std::endl;
        return;
    }

    std::cin.ignore();
    std::cout << "Enter Vehicle Plate Number: ";
    std::getline(std::cin, plateNumbers[targetSlot]);
    isOccupied[targetSlot] = true;

    std::cout << "Success! Vehicle assigned to Slot Number: " << (targetSlot + 1) << std::endl;
}

void releaseVehicle(bool isOccupied[], std::string plateNumbers[]) {
    int slotNum;
    std::cout << "Enter Slot Number to clear (1-" << MAX_SLOTS << "): ";
    std::cin >> slotNum;

    if (slotNum < 1 || slotNum > MAX_SLOTS) {
        std::cout << "Invalid slot number target!" << std::endl;
        return;
    }

    int index = slotNum - 1;
    if (!isOccupied[index]) {
        std::cout << "Slot " << slotNum << " is already empty." << std::endl;
    } else {
        std::cout << "Vehicle " << plateNumbers[index] << " successfully checked out from Slot " << slotNum << "." << std::endl;
        isOccupied[index] = false;
        plateNumbers[index] = "";
    }
}

void searchVehicle(const bool isOccupied[], const std::string plateNumbers[]) {
    std::cin.ignore();
    std::string searchPlate;
    std::cout << "Enter Plate Number to look up: ";
    std::getline(std::cin, searchPlate);

    int foundIndex = -1;
    for (int i = 0; i < MAX_SLOTS; i++) {
        if (isOccupied[i] && plateNumbers[i] == searchPlate) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        std::cout << "Vehicle found! It is currently parked in Slot Number: " << (foundIndex + 1) << std::endl;
    } else {
        std::cout << "No matching vehicle found in the active parking directory." << std::endl;
    }
}

int main() {
    bool isOccupied[MAX_SLOTS];
    std::string plateNumbers[MAX_SLOTS];
    int choice = 0;

    initializeSystem(isOccupied, plateNumbers);

    while (choice != 5) {
        displayMenu();
        std::cin >> choice;

        if (choice == 1) {
            parkVehicle(isOccupied, plateNumbers);
        } else if (choice == 2) {
            releaseVehicle(isOccupied, plateNumbers);
        } else if (choice == 3) {
            viewParkingSlots(isOccupied, plateNumbers);
        } else if (choice == 4) {
            searchVehicle(isOccupied, plateNumbers);
        } else if (choice == 5) {
            std::cout << "Exiting Parking System. Have a safe drive!" << std::endl;
        } else {
            std::cout << "Invalid selection! Please enter an option from 1 to 5." << std::endl;
        }
    }

    return 0;
}
