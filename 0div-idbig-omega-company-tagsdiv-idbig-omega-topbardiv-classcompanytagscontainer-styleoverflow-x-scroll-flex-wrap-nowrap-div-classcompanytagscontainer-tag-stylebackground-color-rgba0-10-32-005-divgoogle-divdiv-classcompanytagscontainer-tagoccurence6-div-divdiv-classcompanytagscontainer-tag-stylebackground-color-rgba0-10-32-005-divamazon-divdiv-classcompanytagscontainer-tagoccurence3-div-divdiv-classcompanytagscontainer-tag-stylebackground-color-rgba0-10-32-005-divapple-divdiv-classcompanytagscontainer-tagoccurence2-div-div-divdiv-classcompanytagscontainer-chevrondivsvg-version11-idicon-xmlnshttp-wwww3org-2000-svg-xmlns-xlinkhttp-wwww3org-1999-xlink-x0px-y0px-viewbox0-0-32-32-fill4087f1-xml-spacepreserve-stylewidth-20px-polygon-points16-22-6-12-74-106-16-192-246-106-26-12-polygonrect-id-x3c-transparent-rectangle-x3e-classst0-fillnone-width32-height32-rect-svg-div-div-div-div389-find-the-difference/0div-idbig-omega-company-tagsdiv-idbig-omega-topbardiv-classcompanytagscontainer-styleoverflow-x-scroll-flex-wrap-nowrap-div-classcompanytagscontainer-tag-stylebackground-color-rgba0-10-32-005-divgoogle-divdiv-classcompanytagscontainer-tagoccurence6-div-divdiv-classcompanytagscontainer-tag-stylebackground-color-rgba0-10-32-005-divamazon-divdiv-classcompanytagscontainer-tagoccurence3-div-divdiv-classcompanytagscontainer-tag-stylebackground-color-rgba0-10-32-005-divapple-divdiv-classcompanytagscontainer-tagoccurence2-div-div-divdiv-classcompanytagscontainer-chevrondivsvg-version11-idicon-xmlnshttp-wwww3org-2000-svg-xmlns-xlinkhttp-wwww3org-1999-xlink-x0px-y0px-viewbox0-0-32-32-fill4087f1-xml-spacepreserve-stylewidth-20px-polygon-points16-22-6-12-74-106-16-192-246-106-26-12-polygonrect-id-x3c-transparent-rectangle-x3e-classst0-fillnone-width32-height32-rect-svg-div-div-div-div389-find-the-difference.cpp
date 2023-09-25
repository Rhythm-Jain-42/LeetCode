class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        char ans=t[t.size()-1];
        for(int i=0; i<s.size(); i++){
            if(s[i]!=t[i]){
                ans=t[i];
                break;
            }
        }
        return ans;
    }
};