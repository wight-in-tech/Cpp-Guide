
//link:https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

// description:2149. Rearrange Array Elements by Sign
// You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

// You should return the array of nums such that the the array follows the given conditions:

// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.
// Return the modified array after rearranging the elements to satisfy the aforementioned conditions.


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> Arrayx(nums.size());
        int p=0;
        int n =1;

        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                Arrayx[n]=nums[i];
                n+=2;
            }
            if(nums[i]>0){
                Arrayx[p]=nums[i];
                p+=2;
            }
            
            
        }
        
        return Arrayx;
    }
};