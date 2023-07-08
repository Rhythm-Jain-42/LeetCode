class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
     
        int rows = matrix.size();
        if(rows==1)
            return matrix[0][0];
        int cols = matrix[0].size();
        
        int i=1;
        for(; i<rows; i++)
        {   
            matrix[i][0]+= min(matrix[i-1][0], matrix[i-1][1]);
            
            int j=1;
            for(; j<cols-1; j++)
            {                
                    matrix[i][j]+= min(matrix[i-1][j-1], min(matrix[i-1][j], matrix[i-1][j+1]) );               
            }
            
            matrix[i][j]+= min(matrix[i-1][j], matrix[i-1][j-1]);
        }
        
        i--;
        int mini= INT_MAX;
        for(int j=0 ; j<cols; j++ )
            mini = min (mini, matrix[i][j]);
        
        return mini;
    }
};