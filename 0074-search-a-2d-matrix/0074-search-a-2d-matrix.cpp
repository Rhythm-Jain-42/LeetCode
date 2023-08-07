class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        bool ans=false;
        
        for(int i=0;i<n;i++)
        {
            if(ans==true) break;
            int lo=0,hi=m-1;
            while(lo<=hi)
            {
                int mid=lo+(hi-lo)/2;
                if(target==matrix[i][mid]){
                    ans=true;
                    break;
                }
                else if(target>matrix[i][mid]) lo=mid+1;
                else hi=mid-1;
            }
        }
        return ans;
    }
};