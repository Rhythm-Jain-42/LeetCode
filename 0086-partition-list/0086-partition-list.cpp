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
    ListNode* partition(ListNode* head, int x) {
        ListNode *right=new ListNode(0);
        ListNode *left=new ListNode(0);
        
        ListNode *l=left;
        ListNode *r=right;
        
        while(head){
            if(head->val<x){
                l->next=head;
                l=l->next;
            }
            else{
                r->next=head;
                r=r->next;
            }
            
            head=head->next;
        }
        l->next=right->next;
        r->next=NULL;
        return left->next;
    }
};