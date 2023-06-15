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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL) return 0;
        int ans, lvl=0, sum=INT_MIN;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int count=q.size(), level_sum=0;
            while(count--)
            {
                TreeNode* temp=q.front();
                q.pop();
                level_sum+=temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            lvl++;
            if(level_sum>sum) ans=lvl;
            sum=max(sum, level_sum);
        }
        return ans;
    }
};