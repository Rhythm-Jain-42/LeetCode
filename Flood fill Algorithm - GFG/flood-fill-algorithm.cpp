//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>& image,vector<vector<int>>& ans,int iniColor,int newColor,int n,int m){
        if(row < 0 || col < 0 || row >=n || col >=m || image[row][col]!=iniColor || ans[row][col]==newColor){
            return;
        }
        ans[row][col] = newColor;
        // left
        dfs(row,col-1,image,ans,iniColor,newColor,n,m);
        // up
        dfs(row-1,col,image,ans,iniColor,newColor,n,m);
        // right
        dfs(row,col+1,image,ans,iniColor,newColor,n,m);
        // down
        dfs(row+1,col,image,ans,iniColor,newColor,n,m);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        vector<vector<int>> ans = image;
        int iniColor = image[sr][sc];
        int n = image.size();
        int m = image[0].size();
        dfs(sr,sc,image,ans,iniColor,newColor,n,m);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends