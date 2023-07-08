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
        return f(0, 0, triangle, n, dp);
    }
};