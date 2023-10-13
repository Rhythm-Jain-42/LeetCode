class Solution {
public:
    int f(int i, vector<int>& cost, vector<int>& dp)
    {
        if(i<0) return 0;
        if(i==0 || i==1) return cost[i];
        
        if(dp[i]!=-1) return dp[i];
        
        dp[i]=cost[i]+min(f(i-1, cost, dp), f(i-2, cost, dp));
        
        return dp[i];
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n);
        
        dp[0]=cost[0];
        dp[1]=cost[1];
        
        for(int i=2; i<n; i++)
        {
            dp[i]=cost[i]+min(dp[i-1], dp[i-2]);
        }
        
        return min(dp[n-1], dp[n-2]);
    }
};