//link:https://leetcode.com/problems/two-sum/





//description:1. Two Sum
//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> res(2);
        for(int i=0;i<n;i++){
            
            for(int j=i+1;j<n;j++){
            
            if(nums[i]+nums[j]==target)
            { res[0]=i;
            res[1]=j;}
            }

        }
        return res;
    }
};