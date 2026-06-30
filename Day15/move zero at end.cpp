#include <iostream>
#include <vector>

void moveZeroes(std::vector<int>& nums) {
    int lastNonZeroFoundAt = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            std::swap(nums[lastNonZeroFoundAt], nums[i]);
            lastNonZeroFoundAt++;
        }
    }
}

int main() {
    std::vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
    for (int num : nums) {
        std::cout << num << " ";
    }
    return 0;
}