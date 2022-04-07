#include <iostream>
#include <set>
#include <string>

using namespace std;
/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */

// @lc code=start
class Solution {
  public:
    string reverseVowels(string s) {
        int l = 0, r = s.size() - 1;
        set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        while (l < r) {
            if (vowels.count(s[l]) > 0 && vowels.count(s[r]) > 0) {
                swap(s[l++], s[r--]);
            } else if (vowels.count(s[l]) < 1) {
                l++;
            } else if (vowels.count(s[r]) < 1) {
                r--;
            }
        }
        return s;
    }
};
// @lc code=end
