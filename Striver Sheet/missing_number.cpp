

//link: https://leetcode.com/problems/missing-number/description/



//Description: 268. Missing Number

//Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.





class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int x=0;
       for(int l:nums){
           x^=l;
       }
       for(int i=0;i<=nums.size();i++){
           x^=i;
       }
       return x;
    }
};