class Solution {
    private:
    void solve(vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &s, int index)
    {
        int sum=accumulate(s.begin(),s.end(),0);
        if(sum>target) return;
        if(index>=candidates.size())
        {
            if(sum==target) ans.push_back(s);
            return ;
        }
        s.push_back(candidates[index]);
        solve(candidates,target,ans,s,index);
        s.pop_back();
        solve(candidates,target,ans,s,index+1);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> s;
        solve(candidates, target, ans, s, 0);
        return ans;
    }
};