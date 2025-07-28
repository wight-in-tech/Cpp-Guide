//link:https://leetcode.com/problems/majority-element/

//description: 169. Majority Element
// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.




//brute force
class Solution {
public:
    int majorityElement(vector<int>& nums) {





        int max_count=0;
        int max_element=nums[0];
        int n=nums.size()/2;
        for(int i=0;i<nums.size();i++){
            int count =0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count>max_count){
                max_element=nums[i];
            }
            max_count= max(count,max_count);
            if(max_count>n)
                break;
            


        }

        return max_element;



        
    }
};


//Moore's Voting algorithm;
class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int max_freq=0;
        int res;
        for(int i=0;i<nums.size();i++)
       { if(max_freq==0){
            res = nums[i];

        }
        if(nums[i]==res){
            max_freq++;
        }
        else{
            max_freq--;
        }
            }

    return res;
        
    }
};