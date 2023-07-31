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
    void f(TreeNode* root, int &ans, int maxi)
    {
        if(root==NULL) return;
        
        maxi=max(maxi, root->val);
        if(root->val==maxi) ans++;
        
        f(root->left, ans, maxi);
        f(root->right, ans, maxi);
    }
    
    int goodNodes(TreeNode* root) {
        int ans=0;
        f(root, ans, root->val);
        return ans;
    }
};