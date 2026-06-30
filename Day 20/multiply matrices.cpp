#include <iostream>
#include <vector>

int main() {
    int r1, c1, r2, c2;

    if (!(std::cin >> r1 >> c1)) return 0;
    std::vector<std::vector<int>> m1(r1, std::vector<int>(c1));
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            std::cin >> m1[i][j];
        }
    }

    if (!(std::cin >> r2 >> c2)) return 0;
    if (c1 != r2) {
        std::cout << "-1" << std::endl;
        return 0;
    }

    std::vector<std::vector<int>> m2(r2, std::vector<int>(c2));
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            std::cin >> m2[i][j];
        }
    }

    std::vector<std::vector<int>> res(r1, std::vector<int>(c2, 0));
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            std::cout << res[i][j] << (j == c2 - 1 ? "" : " ");
        }
        std::cout << std::endl;
    }

    return 0;
}
