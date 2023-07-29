class Solution {
private :
    bool isPalindrome(string s, int st, int end){
        while(st<=end){
            if(s[st]==s[end]){
                st++;
                end--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    

    void palindromePart(int ind, string s, vector<string> &ds, vector<vector<string>> &res){
        if(ind==s.size()){
            res.push_back(ds);
            return;
        }
        for(int i=ind;i<s.size();i++){
            if(isPalindrome(s,ind,i)){
                string subString=s.substr(ind,i-ind+1);
                ds.push_back(subString);
                palindromePart(i+1,s,ds,res);
                ds.pop_back();
            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> ds;
        palindromePart(0,s,ds,res);
        return res;
    }
};