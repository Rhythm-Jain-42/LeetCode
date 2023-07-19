class Solution {
public:
    
    int eraseOverlapIntervals(vector<vector<int>>&v) 
    {
        int n=v.size();
        sort(v.begin(), v.end()); 
        int count=0;
        int i=0, j=1;
        
        while(j<n)
        {
            if(v[i][1]<=v[j][0]) 
            {
                i=j;
                j++;
            }
            else if(v[i][1]<=v[j][1]) 
            {
                count++;
                j++;
            }
            else if(v[i][1]>v[j][1])   
            {
                count++;
                i = j;
                j++;
            }
        }
        return count;
    }
};