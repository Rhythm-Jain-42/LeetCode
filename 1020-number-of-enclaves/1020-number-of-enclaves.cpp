class Solution {
    void dfs(int row, int col, vector<vector<int>>& grid, int n, int m)
    {
        if(row<0 || row>=n || col<0 || col>=m)
            return;

        if(grid[row][col]==0) return;

        grid[row][col]=0;
        dfs(row, col+1, grid, n, m);
        dfs(row, col-1, grid, n, m);
        dfs(row+1, col, grid, n, m);
        dfs(row-1, col, grid, n, m);
    }

public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(i==0 || i==n-1 || j==0 || j==m-1)
                {
                    dfs(i, j, grid, n, m);
                }
            }
        }

        int ans=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]==1) ans++;
            }
        }
        return ans;
    }
};