#include <iostream>
#include <vector>
#include <set>

std::vector<int> findUnion(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::set<int> uniqueElements;
    
    for (int num : arr1) {
        uniqueElements.insert(num);
    }
    
    for (int num : arr2) {
        uniqueElements.insert(num);
    }
    
    return std::vector<int>(uniqueElements.begin(), uniqueElements.end());
}

int main() {
    std::vector<int> arr1 = {1, 2, 4, 5, 6};
    std::vector<int> arr2 = {2, 3, 5, 7};
    
    std::vector<int> result = findUnion(arr1, arr2);
    
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
