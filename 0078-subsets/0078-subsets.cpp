class Solution {
public:
    void f(int ind, vector<int>& nums, vector<int> op, vector<vector<int>> &ans){
        if(ind>=nums.size()){
            ans.push_back(op);
            return;
        }
        
        f(ind+1, nums, op, ans);
        
        op.push_back(nums[ind]);
        f(ind+1, nums, op, ans);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> op;
        f(0, nums, op, ans);
        return ans;
    }
};