/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *h = head;
        ListNode *t = head;
        while (h != nullptr && h->next != nullptr) {
            t = t->next;
            h = h->next->next;
            if (t == h) {
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

