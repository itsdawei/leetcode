#include <vector>
using namespace std;
/*
 * @lc app=leetcode id=452 lang=cpp
 *
 * [452] Minimum Number of Arrows to Burst Balloons
 */

// @lc code=start
bool cmp(const vector<int> &i1, const vector<int> &i2) {
    return i1[1] < i2[1];
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
       sort(points.begin(), points.end(), cmp);
       int arrows = 1;
       int end = points[0][1];
       for (size_t i = 0; i < points.size(); i++) {
           if (points[i][0] > end) {
               end = points[i][1];
               arrows++;
           }
       }
       return arrows;
    }
};
// @lc code=end

