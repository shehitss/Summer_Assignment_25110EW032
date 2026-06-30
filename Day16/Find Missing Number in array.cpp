#include <iostream>
#include <vector>

int findMissingNumber(const std::vector<int>& nums, int n) {
    int xorSum = 0;
    
    for (int i = 1; i <= n; ++i) {
        xorSum ^= i;
    }
    
    for (int num : nums) {
        xorSum ^= num;
    }
    
    return xorSum;
}

int main() {
    std::vector<int> nums = {1, 2, 4, 5, 6};
    int n = 6;
    
    std::cout << findMissingNumber(nums, n) << std::endl;
    
    return 0;
}
