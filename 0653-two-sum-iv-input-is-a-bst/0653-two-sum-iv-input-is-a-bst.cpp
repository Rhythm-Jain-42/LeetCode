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
    vector<int> inorder;
    
    void inOrder(TreeNode* root){
        if(root==NULL) return;
        inOrder(root->left);
        inorder.push_back(root->val);
        inOrder(root->right);
    }
    
    bool findTarget(TreeNode* root, int k) {
        inOrder(root);
        int left=0, right=inorder.size()-1;
        
        while(left<right){
            if(inorder[left]+inorder[right]==k) return true;
            else if(inorder[left]+inorder[right]>k) right--;
            else left++;
        }
        
        return false;
    }
};