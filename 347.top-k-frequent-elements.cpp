#include <unordered_map>
#include <vector>

using namespace std;
/*
 * @lc app=leetcode id=347 lang=cpp
 *
 * [347] Top K Frequent Elements
 */

// @lc code=start
class Solution {
  public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
        unordered_map<int, int> occur;
        for (int num : nums) {
            occur[num]++;
        }

        vector<vector<int>> buckets(nums.size() + 1);
        for (auto it : occur) {
            buckets[it.second].push_back(it.first);
        }

        vector<int> topK;
        for (int i = buckets.size() - 1; i >= 0; i--) {
            for (size_t j = 0; j < buckets[i].size(); j++) {
                if (topK.size() >= k)
                    return topK;
                topK.push_back(buckets[i][j]);
            }
        }
        return topK;
    }
};
// @lc code=end
