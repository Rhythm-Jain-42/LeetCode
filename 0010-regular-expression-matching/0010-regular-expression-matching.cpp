class Solution {
    public:
    
    bool helper(string str, string pat, int i, int j, vector<vector<int>> &dp){
        
        if(i >= str.size() && j >= pat.size()){
            return true;
        }
       
        if(j >= pat.size()){
            return false;
        } 
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        if(i >= str.size()){
            
            if(pat[j + 1] == '*'){
                
                return dp[i][j] = helper(str, pat, i, j + 2, dp);
            }
            
            return false;
        }
        
        if(j + 1 < pat.size() && pat[j + 1] == '*'){
            
              if(pat[j] == '.' || pat[j] == str[i])
              {
                  return dp[i][j] = (helper(str, pat, i + 1, j, dp) || helper(str, pat, i, j + 2, dp));
              }
            
              else{
                  
                  return dp[i][j] = helper(str, pat, i, j + 2, dp);
              }   
        }
        
        else if (pat[j] == '.' || pat[j] == str[i])
        {
            return dp[i][j] = helper(str, pat, i + 1, j + 1, dp);
        }
        
        return dp[i][j] = false;   
    }
    
    bool isMatch(string str, string pat) {
        
        int n = str.size();
        
        int m = pat.size();
        
        vector<vector<int> > dp(n + 1, vector<int> (m + 1, -1));
        
        return helper(str, pat, 0, 0, dp) ? true : false;
    }
};