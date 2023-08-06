class Solution {
public:
    int binaryGap(int n) {
        vector <int> v;
        int i=0;
        while(n){
            v.push_back(n%2);
            n/=2;
        }
        int j;
        for(int i=0; i<v.size();i++)
        {
            if(v[i]==1){
                j=i;
                break;
            }
        }
        int count=0;int ans=0;
        for(int i=j+1; i<v.size(); i++)
        {
            count++;
            if(v[i]==1){
                ans=max(ans, count);
                count=0;
                j=i;
            }
        }

          return ans;
    }
};