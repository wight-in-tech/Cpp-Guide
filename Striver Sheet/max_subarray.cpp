//link:https://leetcode.com/problems/maximum-subarray/

//description:53. Maximum Subarray
//Given an integer array nums, find the subarray with the largest sum, and return its sum.




class Solution {
public:
    int maxSubArray(vector<int>& arr) {
    int res = arr[0];           
    int maxEnding = arr[0];     

    for (int i = 1; i < arr.size(); i++) {
        
        maxEnding = max(arr[i], maxEnding + arr[i]);
        res = max(res, maxEnding);
    }
    return res;
        
    }
};