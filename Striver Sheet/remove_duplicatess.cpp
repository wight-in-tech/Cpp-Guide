//26. Remove Duplicates from Sorted Array

//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

























#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int count = 1; 
        
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] != nums[i - 1]) {
                nums[count++] = nums[i];
            }
        }

        return count;
    }
};