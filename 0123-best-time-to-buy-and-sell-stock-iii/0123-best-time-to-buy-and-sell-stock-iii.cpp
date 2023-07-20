class Solution {
public:
    int f(int ind, int transaction, int k, vector<int>& prices, vector<vector<int>> &dp)
    {
        if(ind==prices.size() || transaction==2*k) return 0;
        
        if(dp[ind][transaction]!=-1) return dp[ind][transaction];
        
        if(transaction%2==0)  //buy
        {
            return dp[ind][transaction]=max(-prices[ind]+f(ind+1, transaction+1, k, prices, dp), f(ind+1, transaction, k, prices, dp));
        }
        else
        {
            return dp[ind][transaction]=max(prices[ind]+f(ind+1, transaction+1, k, prices, dp), f(ind+1, transaction, k, prices, dp));
        }
    }
    
    int maxProfit(vector<int>& prices) {
        int k=2;
        int n=prices.size();
        vector<vector<int>> dp(n, vector<int>(2*k, -1));
        return f(0, 0, k, prices, dp);
    }
};