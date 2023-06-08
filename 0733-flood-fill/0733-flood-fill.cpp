class Solution {
    private: 
        void dfs(int r, int c, vector<vector<int>>& ans, vector<vector<int>>& image, int newColor, int row[], int col[], int iniColor){
            ans[r][c]=newColor;
            int n=image.size();
            int m=image[0].size();
            
            for(int i=0; i<4; i++)
            {
                int nrow=r+row[i];
                int ncol=c+col[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && ans[nrow][ncol]!=newColor && image[nrow][ncol]==iniColor)
                {
                    dfs(nrow, ncol, ans, image, newColor, row, col, iniColor);
                }
            }
        }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans=image;
        int iniColor=image[sr][sc];
        int row[]={-1, 0, 1, 0};
        int col[]={0, 1, 0, -1};
        dfs(sr, sc, ans, image, color, row, col, iniColor);
        return ans;
    }
};