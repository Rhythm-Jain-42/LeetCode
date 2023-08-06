class Solution {
public:  
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m = maze.size();
        int n = maze[0].size();
        queue<pair<int,int>> q;
        q.push({entrance[0],entrance[1]});
        maze[entrance[0]][entrance[1]] = '+';
        int level = 0;
        int dr[4] = {0,1,0,-1};
        int dc[4] = {1,0,-1,0};

        while(!q.empty()){
            level++;
            int size = q.size();
            for(int i=0 ; i<size ; i++){
                auto it = q.front();
                q.pop();
                
                for(int j=0 ; j<4 ; j++){
                    int new_row = it.first + dr[j];
                    int new_col = it.second + dc[j];
    if(new_row >= 0 && new_col >= 0 && new_row < m && new_col < n)
                {
                        if(maze[new_row][new_col] == '+'){
                            continue;
                        }
    if(new_row == 0 || new_col == 0 || new_row == m-1 || new_col == n-1 )
                {
                            return level;
                        }                       
                        q.push({new_row,new_col});
                        maze[new_row][new_col] = '+';   
                    }                    
                }
            }
        }
        return -1;
    }
};