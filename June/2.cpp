/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3348/
**********************************************************************************************************************
Solution:
**/

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
    ListNode* recur(ListNode* head) {
        if(!head)
            return NULL;
        if(head->next == NULL)
            return NULL;
        head->val = head->next->val;
        head->next = recur(head->next);
        return head;
    }
    void deleteNode(ListNode* head) {
        head = recur(head);
    }
};