#include <algorithm>
#include <vector>

using namespace std;

/*
 * @lc app=leetcode id=435 lang=cpp
 *
 * [435] Non-overlapping Intervals
 */

// @lc code=start
bool compareInterval(const vector<int> &i1, const vector<int> &i2) {
    return i1[1] < i2[1];
}

class Solution {
  public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals) {
        sort(intervals.begin(), intervals.end(), compareInterval);

        int removed = 0;
        int end = intervals[0][1];
        for (size_t i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] < end) {
                removed++;
            } else {
                end = intervals[i][1];
            }
        }
        return removed;
    }
};
// @lc code=end
