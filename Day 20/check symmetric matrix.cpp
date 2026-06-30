#include <iostream>
#include <vector>

bool isSymmetric(const std::vector<std::vector<int>>& mat) {
    size_t n = mat.size();
    for (size_t i = 0; i < n; ++i) {
        if (mat[i].size() != n) {
            return false;
        }
    }
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < i; ++j) {
            if (mat[i][j] != mat[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    std::vector<std::vector<int>> mat = {
        {1, 3, 5},
        {3, 2, 4},
        {5, 4, 1}
    };

    if (isSymmetric(mat)) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
