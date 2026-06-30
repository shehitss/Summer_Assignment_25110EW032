#include <iostream>
#include <vector>

int main() {
    int rows, cols;
    std::cin >> rows >> cols;

    std::vector<std::vector<int>> matrix1(rows, std::vector<int>(cols));
    std::vector<std::vector<int>> matrix2(rows, std::vector<int>(cols));
    std::vector<std::vector<int>> sum(rows, std::vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << sum[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
