class Solution {
private:
    bool check(string &s, string &p){
        int n = s.size(), m = p.size();
        if(n != m + 1) return false;
        int i = 0, j = 0;
        while(i < n){
            if(j < m && s[i] == p[j]) j++;
            i++;
        }
        return i == n && j == m;
    }
public:
    int longestStrChain(vector<string>& words) {
        int n = words.size();
        sort(words.begin(), words.end(), [](string &a, string &b){
            return a.size() < b.size();
        });
        int ans = 1;
        vector<int> dp(n, 1);
        for(int i = 1; i < n; i++){
            for(int j = 0; j < i; j++){
                if(check(words[i], words[j]) && dp[i] < dp[j] + 1){
                    dp[i] = dp[j] + 1;
                }
            }
            if(dp[i] > ans){
                ans = dp[i];
            }
        }
        return ans;
    }
};