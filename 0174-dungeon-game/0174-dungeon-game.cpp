class Solution {
public:
    int dp[205][205];

    int func(int i, int j, int n, int m, vector<vector<int>>& dungeon) {
        int x = INT_MAX, y = INT_MAX, z;

        if(i==n-1 and j==m-1) return dungeon[i][j]>0 ? 1 : -dungeon[i][j]+1;

        if(dp[i][j] != -1) return dp[i][j];

        if(i+1<n) x = func(i+1, j, n, m, dungeon);
        if(j+1<m) y = func(i, j+1, n, m, dungeon);

        z = min(x, y);
        z-=dungeon[i][j];
        if(z>0) dp[i][j] = z;
        else dp[i][j] = 1;

        return dp[i][j];
    }

    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        memset(dp, -1, sizeof(dp));
        
        int n = dungeon.size();
        int m = dungeon[0].size();

        int ans = func(0, 0, n, m, dungeon);

        return ans;
    }
};