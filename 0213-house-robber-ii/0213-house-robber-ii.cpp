class Solution {
public:
    int f(int i, vector<int> &dp, vector<int> &nums)
    {
        if(i==0) return nums[0];
        if(i<0) return 0;
        
        if(dp[i]!=-1) return dp[i];
        
        int pick=nums[i]+f(i-2, dp, nums);
        int notpick=0+f(i-1, dp, nums);
        
        return dp[i]=max(pick, notpick);
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> dp1(n, -1), dp2(n, -1), v1, v2;
        for(int i=0; i<n; i++)
        {
            if(i!=0) v1.push_back(nums[i]);
            if(i!=n-1) v2.push_back(nums[i]);
        }
        return max(f(n-2, dp1, v1), f(n-2, dp2, v2));
    }
};