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
int numComponents(ListNode* head, vector<int>& nums) {
    unordered_map<int,int>mp;
    int n=nums.size();
    for(int i=0;i<n;i++){
        mp[nums[i]]++;
    }
    int cnt=0;
    while(head!=NULL){
        if(mp.find(head->val)!=mp.end()){
            while(head!=NULL and mp.find(head->val)!=mp.end()){
                head=head->next;
            }
            cnt++;
        }
        if(head!=NULL){
            head=head->next;
        }
    }
    return cnt;
   }
};