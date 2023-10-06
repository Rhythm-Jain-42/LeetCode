class Solution {
public:
    int f(int n, vector<int> &dp){
        if(n==0) return 1;
        
        if(dp[n-1]!=-1) return dp[n-1];
        
        int maxi=INT_MIN;
        for(int i=1; i<=n; i++)
            maxi=max(maxi, i*f(n-i, dp));
        
        return dp[n-1]=maxi;
    }
    
    int integerBreak(int n) {
        if(n<=3) return n-1;
        vector<int> dp(n, -1);
        return f(n, dp);
    }
};