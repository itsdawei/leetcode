#include <queue>
#include <vector>

using namespace std;

class Solution {
public:
  int lastStoneWeight(vector<int> &stones) {
    priority_queue<int> pq(stones.begin(), stones.end());
    while (pq.size() > 1) {
      int first = pq.top();
      pq.pop();
      int second = pq.top();
      pq.pop();
      if (first - second)
        w;
    }
    return !pq.empty() ? stones[0] : 0;
  }
};
