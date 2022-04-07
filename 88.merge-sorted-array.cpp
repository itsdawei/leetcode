#include <vector>
using namespace std;

/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int i = m - 1; // pointer to end of nums1 (the useful part)
       int j = n - 1; // pointer to end of nums2
       int k = m + n - 1; // pointer to end of nums1 (whole thing)
       while (i >= 0 && j >= 0) {
           if(nums1[i] >= nums2[j]) {
               nums1[k--] = nums1[i--];
           } else {
               nums1[k--] = nums2[j--];
           }
       }
       while (j >= 0) {
           nums1[k--] = nums2[j--];
       }
    }
};
// @lc code=end

