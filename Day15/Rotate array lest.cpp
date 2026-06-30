#include <iostream>
#include <vector>
#include <algorithm>

void leftRotate(std::vector<int>& arr, int d) {
    if (arr.empty()) return;
    d = d % arr.size();
    std::rotate(arr.begin(), arr.begin() + d, arr.end());
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    leftRotate(arr, 2);
    for (int num : arr) {
        std::cout << num << " ";
    }
    return 0;
}