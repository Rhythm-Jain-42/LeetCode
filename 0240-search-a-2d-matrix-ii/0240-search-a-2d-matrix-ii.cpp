class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), col = matrix[0].size()-1;

        int r = 0;
        while(r<row && col>=0){
            int val = matrix[r][col];

            if(val == target)
            return 1;
            else if(val > target)
            col--;
            else 
            r++;
        }

        return 0;
    }
};
