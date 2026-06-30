#include <iostream>
#include <vector>
#include <algorithm>

void rotateRight(std::vector<int>& nums, int k) {
    if (nums.empty()) return;
    k = k % nums.size();
    std::rotate(nums.rbegin(), nums.rbegin() + k, nums.rend());
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    
    rotateRight(nums, k);
    
    for (int num : nums) {
        std::cout << num << " ";
    }
    return 0;
}
