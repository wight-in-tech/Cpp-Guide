

//link: https://leetcode.com/problems/missing-number/description/







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