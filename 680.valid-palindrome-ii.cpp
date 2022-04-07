#include <string>
using namespace std;

/*
 * @lc app=leetcode id=680 lang=cpp
 *
 * [680] Valid Palindrome II
 */

// @lc code=start
class Solution {
  public:
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        while (i < j) {
            if (s[i] != s[j]) {
                return isPalindrome(s, i, j-1) || isPalindrome(s, i + 1, j);
            }
            i++;
            j--;
        }
        return true;
    }

    bool isPalindrome(string s, int i, int j) {
        while (i < j) {
            if (s[i++] != s[j--]) {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end
