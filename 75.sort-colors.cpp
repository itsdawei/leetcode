#include <vector>

using namespace std;

/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
       int zeros = 0, ones = 0, twos = nums.size()-1;
       while (ones <= twos) {
           if (nums[ones] == 0) {
               swap(nums[zeros++], nums[ones++]);
           } else if (nums[ones] == 2) {
               swap(nums[ones], nums[twos--]);
           } else {
               ones++;
           }
       } 
    }
};
// @lc code=end

