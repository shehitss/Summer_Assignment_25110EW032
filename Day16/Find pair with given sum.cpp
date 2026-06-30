#include <iostream>
#include <vector>
#include <unordered_set>

std::pair<int, int> findPair(const std::vector<int>& arr, int target) {
    std::unordered_set<int> seen;
    for (int num : arr) {
        int complement = target - num;
        if (seen.count(complement)) {
            return {complement, num};
        }
        seen.insert(num);
    }
    return {-1, -1};
}

int main() {
    std::vector<int> arr = {3, 5, 2, 8, 11};
    int target = 10;
    std::pair<int, int> result = findPair(arr, target);
    if (result.first != -1 || result.second != -1) {
        std::cout << result.first << " " << result.second << std::endl;
    } else {
        std::cout << "-1" << std::endl;
    }
    return 0;
}
