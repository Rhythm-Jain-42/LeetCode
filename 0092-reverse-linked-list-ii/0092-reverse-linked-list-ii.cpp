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
    ListNode* reverseList(ListNode* head,int steps) { 
        ListNode* temp=NULL;
        ListNode* prevhead=head;

        while(head && steps--)
        {
            ListNode* nextnode=head->next;
            head->next=temp;
            temp=head;
            head=nextnode;
        }
        prevhead->next=head;
        return temp; 

    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int steps=right-left+1;
        ListNode* temp=head;

        if(left==1)
        {
            return reverseList(head,steps);
        }
        while(left>2)
        {
            temp=temp->next;
            left--;
        }
        
        ListNode* reversehead=temp->next;
        if(reversehead)
        temp->next=reverseList(reversehead,steps);


        return head;
        
    
    }
};