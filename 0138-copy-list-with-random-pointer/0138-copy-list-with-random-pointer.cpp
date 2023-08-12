/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        //step-1
        Node * temp = head;
        while(temp){
            Node * newNode = new Node(temp->val);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = temp->next->next;
        }
        //step 2
        Node * itr = head;
        while(itr){
            if(itr->random!=NULL)
                itr->next->random = itr->random->next;
            itr = itr->next->next;
        }
        //step-3
        Node*dummy = new Node(0);
        itr = head;
        temp = dummy;
        Node * orgList;
        while(itr){
            orgList = itr->next->next;
            temp->next = itr->next;
            itr->next = orgList;
            temp = temp->next;
            itr = orgList;  /* itr = itr->next */
        }
        return dummy->next;
    }
};