#include <cstddef>
#include <vector>

using namespace std;

/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */

// @lc code=start
class Solution {
  public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int low = 0;
        int high = numbers.size() - 1;
        while (high > low) {
            if (numbers[low] + numbers[high] > target) {
                high--;
            } else if (numbers[low] + numbers[high] < target) {
                low++;
            } else {
                return {low+1, high+1};
            }
        }
        return {};
    }
};
// @lc code=end
