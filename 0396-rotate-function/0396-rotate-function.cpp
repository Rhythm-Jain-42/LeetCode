class Solution 
{
public:
    int maxRotateFunction(vector<int>& nums) 
    {
        int n = nums.size(), sum = 0;
        vector<int> dp(n);

        for (int i = 0; i < n; ++i)
        {
            dp[0] += nums[i] * i;
            sum += nums[i];
        }
        for (int i = 1; i < n; ++i)
            dp[i] = dp[i - 1] + sum - nums[n - i] * n;
        
        return *max_element(dp.begin(), dp.end());
    }
};