class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans=-1;
        map<int, int> mp;
        for(auto it: arr)
            mp[it]++;
        
        for(auto it: mp){
            if(it.second==it.first){
                if(it.first>ans)
                    ans=it.first;
            }
        }
        return ans;
    }
};