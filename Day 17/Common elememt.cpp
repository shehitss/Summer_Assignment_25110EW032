#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> findCommon(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::unordered_set<int> elements(arr1.begin(), arr1.end());
    std::unordered_set<int> common_set;
    std::vector<int> result;
    
    for (int num : arr2) {
        if (elements.count(num)) {
            common_set.insert(num);
        }
    }
    
    result.assign(common_set.begin(), common_set.end());
    return result;
}

int main() {
    std::vector<int> arr1 = {1, 2, 4, 5, 6};
    std::vector<int> arr2 = {2, 3, 5, 7};
    
    std::vector<int> common = findCommon(arr1, arr2);
    
    for (int num : common) {
        std::cout << num << " ";
    }
    
    return 0;
}
