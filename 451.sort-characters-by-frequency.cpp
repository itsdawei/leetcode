#include <queue>
#include <string>
#include <unordered_map>
#include <utility>

using namespace std;
/*
 * @lc app=leetcode id=451 lang=cpp
 *
 * [451] Sort Characters By Frequency
 */

// @lc code=start
class Solution {
  public:
    string frequencySort(string s) {
        unordered_map<char, int> occur;
        for (char ch : s) {
            occur[ch]++;
        }
        priority_queue<pair<int, char>> pq;
        for (auto it : occur) {
            pq.push(make_pair(it.second, it.first));
        }

        string ret = "";
        while (!pq.empty()) {
            ret += string(pq.top().first, pq.top().second);
            pq.pop();
        }
        return ret;
    }
};
// @lc code=end
