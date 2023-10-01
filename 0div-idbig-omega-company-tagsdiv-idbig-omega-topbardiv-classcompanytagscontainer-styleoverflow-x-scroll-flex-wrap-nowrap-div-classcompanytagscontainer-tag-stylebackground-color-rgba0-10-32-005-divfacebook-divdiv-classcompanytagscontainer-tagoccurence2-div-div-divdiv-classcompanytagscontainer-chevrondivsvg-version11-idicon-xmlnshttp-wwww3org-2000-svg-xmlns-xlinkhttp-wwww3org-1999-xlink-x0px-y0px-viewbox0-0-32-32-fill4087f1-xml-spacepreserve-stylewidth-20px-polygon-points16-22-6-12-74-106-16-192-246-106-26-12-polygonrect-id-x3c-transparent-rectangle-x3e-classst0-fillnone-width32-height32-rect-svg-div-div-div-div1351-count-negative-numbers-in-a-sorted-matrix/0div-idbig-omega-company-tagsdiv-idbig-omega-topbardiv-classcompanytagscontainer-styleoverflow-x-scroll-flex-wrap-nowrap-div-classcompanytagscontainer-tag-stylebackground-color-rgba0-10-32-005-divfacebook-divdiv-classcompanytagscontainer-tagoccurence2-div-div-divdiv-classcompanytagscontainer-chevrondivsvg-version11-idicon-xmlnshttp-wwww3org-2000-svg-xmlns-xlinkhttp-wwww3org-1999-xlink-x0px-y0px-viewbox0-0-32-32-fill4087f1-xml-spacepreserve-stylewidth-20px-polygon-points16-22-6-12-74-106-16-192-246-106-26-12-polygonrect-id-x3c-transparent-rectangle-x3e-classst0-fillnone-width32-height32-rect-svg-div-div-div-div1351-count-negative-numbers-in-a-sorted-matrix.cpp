class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        
        int i=n-1, j=0;
        while(i>=0 && j<m){
            if(grid[i][j]<0){
                ans+=m-j;
                i--;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};