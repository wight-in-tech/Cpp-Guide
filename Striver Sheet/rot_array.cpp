//189. Rotate Array

//Link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/1703760271/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
         vector<int> numsc(n);
        k = k % (n);
    //    reverse(nums.begin(),nums.end());
    // //    reverse(nums.end()-k,nums.begin());
    //     reverse(nums.begin(),nums.begin()+k);
    //    reverse(nums.begin()+k,nums.end());

      for(int i=0;i<n;i++){
       numsc[(i+k)%n]=nums[i];
      }

nums=numsc;
    }
};