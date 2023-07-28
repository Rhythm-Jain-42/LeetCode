class Solution {
public:
    void f(int ind, vector<int>& nums, vector<vector<int>> &ans, vector<int> &vec)
    {
        if(ind==nums.size())
        {
            ans.push_back(vec);
            return;
        }
        
        vec.push_back(nums[ind]);
        f(ind+1, nums, ans, vec);
        
        vec.pop_back();
        while(ind+1<nums.size() && nums[ind]==nums[ind+1]) ind++;
        f(ind+1, nums, ans, vec);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> vec;
        f(0, nums, ans, vec);
        return ans;
    }
};