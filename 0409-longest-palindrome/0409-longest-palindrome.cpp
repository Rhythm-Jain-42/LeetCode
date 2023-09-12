class Solution {
public:
    int longestPalindrome(string s) {
        int ans=0;
        map<char,int> mp;
        for(auto i: s){
            mp[i]++;
            if(mp[i]%2==0)
                ans--;
            else
                ans++;
        }
        
        if(ans>1)
            return s.size()-ans+1;
        else
            return s.size();
    }
};