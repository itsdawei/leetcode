#include <vector>
using namespace std;

/*
 * @lc app=leetcode id=633 lang=cpp
 *
 * [633] Sum of Square Numbers
 */

// @lc code=start
class Solution {
  public:
    bool judgeSquareSum(int c) {
        int a = 0;
        long b = (int)sqrt(c);
        while (a <= b) {
            long long sum = a * a + b * b;
            if (sum < c) {
                a++;
            } else if (sum > c) {
                b--;
            } else {
                return true;
            }
        }

        return false;
    }
};
// @lc code=end
