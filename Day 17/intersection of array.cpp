#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> getIntersection(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::unordered_set<int> set1(arr1.begin(), arr1.end());
    std::unordered_set<int> resultSet;
    std::vector<int> result;

    for (int num : arr2) {
        if (set1.count(num)) {
            resultSet.insert(num);
        }
    }

    result.assign(resultSet.begin(), resultSet.end());
    return result;
}

int main() {
    std::vector<int> arr1 = {4, 9, 5, 4};
    std::vector<int> arr2 = {9, 4, 9, 8, 4};

    std::vector<int> intersection = getIntersection(arr1, arr2);

    for (int num : intersection) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
