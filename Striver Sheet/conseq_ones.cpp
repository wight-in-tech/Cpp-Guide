
//link: https://leetcode.com/problems/max-consecutive-ones/description/

//description: 485. Max Consecutive Ones



//Given a binary array nums, return the maximum number of consecutive 1's in the array.




class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

            int Count = 0;
    int maxCount = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            Count++;
            maxCount = max(maxCount, Count);
        } else {
            Count = 0;
        }
    }
    return maxCount;
    }
};