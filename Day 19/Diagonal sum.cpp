#include <iostream>
#include <vector>

void printDiagonalSums(const std::vector<std::vector<int>>& mat) {
    int n = mat.size();
    int principal = 0;
    int secondary = 0;

    for (int i = 0; i < n; i++) {
        principal += mat[i][i];
        secondary += mat[i][n - 1 - i];
    }

    std::cout << "Principal Diagonal Sum: " << principal << std::endl;
    std::cout << "Secondary Diagonal Sum: " << secondary << std::endl;
}

int main() {
    std::vector<std::vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printDiagonalSums(mat);

    return 0;
}
