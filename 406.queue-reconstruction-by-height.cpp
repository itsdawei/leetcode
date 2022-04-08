#include <algorithm>
#include <vector>
using namespace std;
/*
 * @lc app=leetcode id=406 lang=cpp
 *
 * [406] Queue Reconstruction by Height
 */

// @lc code=start
bool cmp(const vector<int> &a, const vector<int> &b) {
    if (a[0] == b[0]) {
        return a[1] < b[1];
    }
    return a[0] > b[0];
}
class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> queue;
        sort(people.begin(), people.end(), cmp);
        for(vector<int> it : people) {
            queue.insert(queue.begin() + it[1], it);
        }
        return queue;
    }
};
// @lc code=end

