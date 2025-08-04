// link:https://leetcode.com/problems/rotate-image/?__cf_chl_tk=7J2anTzqC6OJPUsfH1bFaoszY5U.8gEM.mu21koXQV8-1754326158-1.0.1.1-6WRTwZSUinCYfg.KfPCxMw4th264rzxxldu0Jn_NU70


// description:48. Rotate Image
// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

 


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      
        for (int row = 0; row < matrix.size() / 2; ++row) {
            for (int col = 0; col < matrix.size(); ++col) {
                swap(matrix[row][col], matrix[matrix.size() - row - 1][col]);
            }
        }
      
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < i; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};