class Solution {
public:
    int f(int i, string s, vector<int> &dp){
        if(i>=s.size()) return 1;
        if(s[i]=='0') return 0;
        if(i==s.size()-1) return 1;
        
        if(dp[i]!=-1) return dp[i];
        
        if(s[i]=='1' || (s[i]=='2' && s[i+1]>=48 && s[i+1]<=54))
            return dp[i]=f(i+1, s, dp)+f(i+2, s, dp);
        
        return dp[i]=f(i+1, s, dp);
    }
    
    int numDecodings(string s) {
        vector<int> dp(s.size(), -1);
        return f(0, s, dp);
    }
};