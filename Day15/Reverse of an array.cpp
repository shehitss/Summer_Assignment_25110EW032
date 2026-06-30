#include <iostream>
#include <algorithm>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int end = n - 1;

    while (start < end) {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}