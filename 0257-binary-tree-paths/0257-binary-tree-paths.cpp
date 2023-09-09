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
    void dfs(TreeNode* root, vector<string>& paths, string path) {
        if (!root) {
            return;
        }

        path += (path.empty() ? "" : "->") + to_string(root->val); 
        if (!root->left && !root->right) {
            paths.push_back(path);
        }
        
        dfs(root->left, paths, path);
        dfs(root->right, paths, path);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        dfs(root, res, "");
        return res;
    }
};