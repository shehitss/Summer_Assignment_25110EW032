#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 100);

    int secretNumber = distr(gen);
    int guess = 0;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have chosen a number between 1 and 100." << std::endl;

    while (guess != secretNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You found the number in " << attempts << " attempts." << std::endl;
        }
    }

    return 0;
}
