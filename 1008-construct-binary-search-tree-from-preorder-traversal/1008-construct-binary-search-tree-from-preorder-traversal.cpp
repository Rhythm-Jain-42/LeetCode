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
    TreeNode* f(vector<int>&preorder, int &i, int upperBound){
        if(i==preorder.size() || preorder[i]>upperBound) 
            return NULL;
        
        TreeNode *root=new TreeNode(preorder[i]);
        i=i+1;
        root->left=f(preorder, i, root->val);
        root->right=f(preorder, i, upperBound);
        
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return f(preorder, i, INT_MAX);
    }
};