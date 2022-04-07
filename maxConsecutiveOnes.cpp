#include <vector>

using namespace std;

class Solution {
  public:
    int findMaxConsecutiveOnes(vector<int> &nums) {
        int count;
        for (int i = 0; i < nums.size(); i++) {
            count++;
            if (!nums[i]) {
                count = 0;
            }
        }
        return count;
    }
};
