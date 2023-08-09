class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp; 
        
        for(auto x: strs){
            string temp=x; 
            sort(x.begin(), x.end()); 
            mp[x].push_back(temp); 
        }
        vector<vector<string>>ans;
        for(auto it: mp){
            vector<string> temp=it.second; 
            ans.push_back(temp);
        }
        return ans;
    }
};

// aet={eat, ate, tea}
// ant={nat, tan}
// abt={bat}