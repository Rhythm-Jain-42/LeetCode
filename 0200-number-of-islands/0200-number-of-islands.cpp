class Solution {
public:
    void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>>& grid)    {
        vis[row][col]=1;
        
        int n=grid.size();
        int m=grid[0].size();
        
        queue<pair<int, int>> q;
        q.push({row, col});
        
        int r[]={-1, 0, 1, 0};
        int c[]={0, 1, 0, -1};
        
        while(!q.empty()){
            int rows=q.front().first;
            int cols=q.front().second;
            q.pop();
            for(int i=0; i<4; i++){
                int nrow=rows+r[i];
                int ncol=cols+c[i];
                
                if (nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && !vis[nrow][ncol]){                               vis[nrow][ncol]=1;
                    q.push({nrow, ncol});
                }
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>> vis(n, vector<int>(m, 0));
        
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    ans++;
                    bfs(i, j, vis, grid);
                }
            }
        }
        return ans;
    }
};