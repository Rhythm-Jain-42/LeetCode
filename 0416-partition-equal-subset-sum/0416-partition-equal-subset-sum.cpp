class Solution {
public:
    bool f(int ind, int target, vector<int>& nums, vector<vector<int>>& dp){
        if(target==0) return true;
        if(ind==0) return nums[0]==target;
        
        if(dp[ind][target]!=-1) return dp[ind][target];
        
        bool notpick=f(ind-1, target, nums, dp);
        bool pick=false;
        if(nums[ind]<=target) 
            pick=f(ind-1, target-nums[ind], nums, dp);
        
        return dp[ind][target]=pick || notpick;
    }
    
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(), nums.end(), 0);
        if(sum&1) return false;
        int hsum=sum>>1;
        vector<vector<int>> dp(nums.size(), vector<int>(hsum+1, -1));
        return f(nums.size()-1, hsum, nums, dp);
    }
};