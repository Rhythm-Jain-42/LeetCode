class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> smp,pmp;
        vector<int> ans;
        for(int i=0;i<p.size();i++){
            smp[s[i]]++;
            pmp[p[i]]++;
        }
        if(smp==pmp){
            ans.push_back(0);
        }
        int i=0;
        for(int j=p.size();j<s.size();j++){
            smp[s[j]]++;
            smp[s[i]]--;
            if(smp[s[i]]==0){
                smp.erase(s[i]);
            }
            i++;
            if(smp==pmp){
                ans.push_back(i);
            }
        }
        return ans;

    }
};