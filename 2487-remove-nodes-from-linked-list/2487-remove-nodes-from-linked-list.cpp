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
    ListNode* removeNodes(ListNode* head) {
        if(head->next == NULL)
        {
            return head;
        }
        ListNode *child = removeNodes(head->next);
        if(head->val >= child->val)
        {
            head->next = child;
            return head;
        }
        else
        {
            return child;
        }
        
    }
};