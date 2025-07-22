//link: https://leetcode.com/problems/move-zeroes/description/


//Problem description: 283. Move Zeroes Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

//Note that you must do this in-place without making a copy of the array.










class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int temp = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
               
                nums[temp] = nums[i];
                temp++;
    
            }
        }

        while (temp < n) {
            nums[temp] = 0;
            temp++;
        }
    }
};