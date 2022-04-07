#include <vector>

using namespace std;

/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
  public:
    int findMaxConsecutiveOnes(vector<int> &nums) {
        int count = 0;
        int maxCount = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (!nums[i]) {
                maxCount = max(maxCount, count);
                count = 0;
            } else {
                count++;
            }
        }
        return max(maxCount, count);
    }
};
// @lc code=end
