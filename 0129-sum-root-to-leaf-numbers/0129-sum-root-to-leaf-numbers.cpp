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
    void f(TreeNode* root, int &sum, int &ans){
        if(root->left==NULL && root->right==NULL){
            sum=(sum*10)+root->val;
            ans+=sum;
            sum=sum/10;
            return;
        }
        
        sum=(sum*10)+root->val;
        if(root->left) f(root->left, sum, ans);
        if(root->right) f(root->right, sum, ans);
        sum/=10;
    }
    
    int sumNumbers(TreeNode* root) {
        int sum=0;
        int ans=0;
        f(root, sum, ans);
        return ans;
    }
};