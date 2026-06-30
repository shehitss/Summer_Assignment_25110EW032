#include <iostream>
#include <vector>
#include <string>

struct Show {
    std::string movieName;
    double ticketPrice;
    std::vector<bool> seats; 
};

int main() {
    Show currentShow = {"Sci-Fi Odyssey", 12.50, std::vector<bool>(10, false)};
    int choice = 0;

    while (choice != 4) {
        std::cout << "\n=== Movie Ticket Booking System ===" << std::endl;
        std::cout << "Current Movie: " << currentShow.movieName << " ($" << currentShow.ticketPrice << "/ticket)" << std::endl;
        std::cout << "1. View Seating Map" << std::endl;
        std::cout << "2. Book a Ticket" << std::endl;
        std::cout << "3. Cancel a Booking" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "\n--- Seating Map ---" << std::endl;
            for (size_t i = 0; i < currentShow.seats.size(); i++) {
                std::cout << "[Seat " << (i + 1) << ": " << (currentShow.seats[i] ? "RESERVED" : "AVAILABLE") << "] " << std::endl;
            }

        } else if (choice == 2) {
            int seatNumber;
            std::cout << "Enter seat number to book (1-" << currentShow.seats.size() << "): ";
            std::cin >> seatNumber;

            if (seatNumber < 1 || seatNumber > static_cast<int>(currentShow.seats.size())) {
                std::cout << "Invalid seat number!" << std::endl;
            } else if (currentShow.seats[seatNumber - 1]) {
                std::cout << "Sorry, Seat " << seatNumber << " is already taken." << std::endl;
            } else {
                currentShow.seats[seatNumber - 1] = true;
                std::cout << "Booking Confirmed for Seat " << seatNumber << "! Total cost: $" << currentShow.ticketPrice << std::endl;
            }

        } else if (choice == 3) {
            int seatNumber;
            std::cout << "Enter seat number to cancel (1-" << currentShow.seats.size() << "): ";
            std::cin >> seatNumber;

            if (seatNumber < 1 || seatNumber > static_cast<int>(currentShow.seats.size())) {
                std::cout << "Invalid seat number!" << std::endl;
            } else if (!currentShow.seats[seatNumber - 1]) {
                std::cout << "Seat " << seatNumber << " is not currently booked." << std::endl;
            } else {
                currentShow.seats[seatNumber - 1] = false;
                std::cout << "Booking for Seat " << seatNumber << " has been successfully cancelled." << std::endl;
            }

        } else if (choice == 4) {
            std::cout << "Exiting system. Enjoy your movie!" << std::endl;

        } else {
            std::cout << "Invalid choice. Please pick an option from 1 to 4." << std::endl;
        }
    }

    return 0;
}
