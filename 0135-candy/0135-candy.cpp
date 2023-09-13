class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        int sum=0;
        vector<int>v(n,1);
        
        for(int i=0;i<n-1;i++)
        {
            if(ratings[i+1]>ratings[i])
            {
                v[i+1]=v[i]+1;
            }
        }
        
        for(int i=n-1;i>0;i--)
        {
            if(ratings[i-1]>ratings[i] && v[i-1]<=v[i])
            {
                v[i-1]=v[i]+1;
            }
            sum+=v[i];
        }
        sum+=v[0];
        return sum;
    }
};