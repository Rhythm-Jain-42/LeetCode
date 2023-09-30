class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        unordered_map<string, int> mp;
        int n=s.size();
        for(int i=0; i<n; i++){
            mp[s.substr(i, 10)]++;
        }
        
        for(auto it: mp){
            if(it.second>1) ans.push_back(it.first);
        }
        
        return ans;
    }
};