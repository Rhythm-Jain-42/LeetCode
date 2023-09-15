/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void f(TreeNode* root, map<int, int> &mp){
        if(root==NULL) return;
        
        mp[root->val]++;
        if(root->right) f(root->right, mp);
        if(root->left) f(root->left, mp);

    }
    
    vector<int> findMode(TreeNode* root) {
        map<int, int> mp;
        f(root, mp);
        vector<int> ans;
        int maxi=0;
        for(auto it: mp){
            maxi=max(maxi, it.second);
        }
        for(auto it: mp){
            if(it.second==maxi)
                ans.push_back(it.first);
        }
        return ans;
    }
};