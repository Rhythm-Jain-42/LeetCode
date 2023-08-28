class Solution {
    int solve(int i, int zeroes, int ones, vector<string>& strs, vector<vector<vector<int>>>& dp)
    {
        if(i == strs.size())
         return 0;

        if(dp[i][zeroes][ones] != -1)
         return dp[i][zeroes][ones];

        int take = 0, notTake = 0, curr0s = 0, curr1s = 0;
        for(int j=0; j<strs[i].length(); j++)
        {
            curr0s += strs[i][j] == '0' ? 1 : 0;
            curr1s += strs[i][j] == '1' ? 1 : 0;
        }
        if(curr0s <= zeroes && curr1s <= ones){
         take = 1 + solve(i+1,zeroes-curr0s,ones-curr1s,strs,dp);
        }
        notTake = solve(i+1,zeroes,ones,strs,dp);

        return dp[i][zeroes][ones] = max(take,notTake);
    }
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
      int len = strs.size();
      vector<vector<vector<int>>> dp(len,vector<vector<int>>(m+1,vector<int>(n+1,-1)));
      return solve(0,m,n,strs,dp);
    }
};