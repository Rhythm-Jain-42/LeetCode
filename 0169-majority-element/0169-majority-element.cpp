class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(auto i:nums) m[i]++;
        int max=0,ans;
        for(auto i:m)
        {
            if(i.second>max){
                 max=i.second;
                 ans=i.first;
            }
        }
        return ans;
    }
};