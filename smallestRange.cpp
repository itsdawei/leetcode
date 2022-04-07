#include <algorithm>
#include <vector>

using namespace std;

class Solution {
  public:
    int smallestRangeII(vector<int> &nums, int k) {
        sort(nums.begin(), nums.end());
        int score = nums.back() - nums.front();
        for (int i = 0; i < nums.size() - 1; i++) {
            int high = max(nums.back() - k, nums[i] + k);
            int low = min(nums.front() + k, nums[i + 1] - k);
            score = min(score, high - low);
        }
        return score;
    }
};
