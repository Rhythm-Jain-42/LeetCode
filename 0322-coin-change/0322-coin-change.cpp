class Solution {
public:
    int helper(int i, vector<int>& coins, int amount, vector<vector<int>>& dp){
        if(dp[i][amount]!=-1){
            return dp[i][amount];
        }
        if(i == 0){
            if(amount%coins[0]==0){
                return amount/coins[i];
            }
            else{
                return INT_MAX-1;
            }
        }
        int not_take = helper(i-1,coins,amount,dp);
        int take = INT_MAX;
        if(coins[i]<=amount){
            take = 1 + helper(i,coins,amount-coins[i],dp); 
        }
        dp[i][amount] = min(take,not_take);
        return dp[i][amount];
    }
    
    int coinChange(vector<int>& coins, int amount){
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1,-1));
        int a = helper(n-1,coins,amount,dp);
        if(a == INT_MAX || a == INT_MAX-1){ 
            return -1;
        }
        return a;
    }
};