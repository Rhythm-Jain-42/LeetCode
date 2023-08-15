class Solution {
public:
    void f(int open, int close, int n, vector<string> &ans, string curr){
        if(curr.size()==n*2){
            ans.push_back(curr);
            return;
        }
        
        if(open<n) f(open+1, close, n, ans, curr+"(");
        if(close<open) f(open, close+1, n, ans, curr+")");
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        f(0, 0, n, ans, "");
        return ans;
    }
};