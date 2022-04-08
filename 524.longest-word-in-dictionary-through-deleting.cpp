#include <string>
#include <vector>

using namespace std;
/*
 * @lc app=leetcode id=524 lang=cpp
 *
 * [524] Longest Word in Dictionary through Deleting
 */

// @lc code=start
class Solution {
  public:
    string findLongestWord(string s, vector<string> &dictionary) {
        string longest = "";
        for (string word : dictionary) {
            if (word.size() > longest.size() ||
                (word.size() == longest.size() && word.compare(longest) < 0)) {
                if (isSubstring(s, word)) {
                    longest = word;
                }
            }
        }
        return longest;
    }

    bool isSubstring(string s, string sub) {
        int i = 0, j = 0;
        while (i < s.size()) {
            if (s[i] == sub[j]) {
                j++;
            }
            i++;
        }
        return j == sub.size();
    }
};
// @lc code=end
