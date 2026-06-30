#include <iostream>
#include <vector>
#include <utility>

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        std::swap(arr[i], arr[min_idx]);
    }
}

int main() {
    std::vector<int> arr = {64, 25, 12, 22, 11};
    
    selectionSort(arr);
    
    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
