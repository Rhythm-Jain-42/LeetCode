class Solution {
public:
    int f(int i, int j, vector<vector<int>>& triangle, int n, vector<vector<int>>& dp)
    {
        if(i==n-1) return triangle[n-1][j];
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int d=f(i+1, j, triangle, n, dp)+triangle[i][j];
        int dg=f(i+1, j+1, triangle, n, dp)+triangle[i][j];
        
        return dp[i][j]=min(d, dg);
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        for(int j=0; j<n; j++) dp[n-1][j]=triangle[n-1][j];
        
        for(int i=n-2; i>=0; i--)
        {
            for(int j=i; j>=0; j--)
            {
                int d=dp[i+1][j]+triangle[i][j];
                int dg=dp[i+1][j+1]+triangle[i][j];
                
                dp[i][j]=min(d,dg);
            }
        }
        return dp[0][0];
    }
};