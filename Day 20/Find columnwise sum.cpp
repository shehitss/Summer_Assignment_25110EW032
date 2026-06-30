#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    if (matrix.empty()) return 0;

    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int col = 0; col < cols; ++col) {
        int sum = 0;
        for (int row = 0; row < rows; ++row) {
            sum += matrix[row][col];
        }
        std::cout << "Sum of column " << col << ": " << sum << "\n";
    }

    return 0;
}
