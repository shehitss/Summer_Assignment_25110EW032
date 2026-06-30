#include <iostream>
#include <vector>
#include <string>

struct Question {
    std::string text;
    std::vector<std::string> options;
    int correctAnswerIndex;
};

int main() {
    std::vector<Question> quiz = {
        {
            "Which programming language is known as a compiled, high-performance language?",
            {"Python", "JavaScript", "C++", "HTML"},
            2
        },
        {
            "What is the time complexity of searching in a perfectly balanced Binary Search Tree?",
            {"O(1)", "O(log n)", "O(n)", "O(n log n)"},
            1
        },
        {
            "Which of the following is not a foundational pillar of Object-Oriented Programming?",
            {"Encapsulation", "Compilation", "Inheritance", "Polymorphism"},
            1
        }
    };

    int score = 0;
    int totalQuestions = quiz.size();

    std::cout << "=== Welcome to the Computer Science Quiz ===\n" << std::endl;

    for (int i = 0; i < totalQuestions; i++) {
        std::cout << "Question " << (i + 1) << ": " << quiz[i].text << std::endl;
        
        for (size_t j = 0; j < quiz[i].options.size(); j++) {
            std::cout << "  " << (j + 1) << ") " << quiz[i].options[j] << std::endl;
        }

        int userAnswer = 0;
        std::cout << "Your answer (1-4): ";
        std::cin >> userAnswer;

        if (userAnswer - 1 == quiz[i].correctAnswerIndex) {
            std::cout << "Correct!\n" << std::endl;
            score++;
        } else {
            std::cout << "Wrong! The correct answer was: " 
                      << quiz[i].options[quiz[i].correctAnswerIndex] << "\n" << std::endl;
        }
    }

    std::cout << "=== Quiz Completed ===" << std::endl;
    std::cout << "Your Final Score: " << score << " / " << totalQuestions << std::endl;

    return 0;
}
