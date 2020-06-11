/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/536/week-3-may-15th-may-21st/3331/
**********************************************************************************************************************
Solution:
**/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head)
            return NULL;
        if(head->next == NULL)
            return head;
        ListNode *even = head->next,*cur = even,*prev = head;
        while(cur) {
            prev->next = prev->next->next;
            prev = cur;
            cur = cur->next;
        }
        prev = head;
        while(prev->next)
            prev = prev->next;
        prev->next = even;        
        return head;
        
    }
};