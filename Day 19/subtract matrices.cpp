#include <iostream>
#include <vector>

using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> A(rows, vector<int>(cols));
    vector<vector<int>> B(rows, vector<int>(cols));
    vector<vector<int>> C(rows, vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
