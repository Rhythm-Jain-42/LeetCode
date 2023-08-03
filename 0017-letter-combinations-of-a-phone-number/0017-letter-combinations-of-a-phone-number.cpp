class Solution {
private: 
    vector<string> ltr = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
public:
    void select(vector<string>& ans, string& digits, string& t, int idx) {
        if(t.size() == digits.size()) {
            ans.push_back(t);
            return;
        }

        string s = ltr[digits[idx] - '0'];

        for(int i = 0; i < s.size(); i++) {
            t.push_back(s[i]);
            select(ans, digits, t, idx + 1);
            t.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) {
            return {};
        }

        vector<string> ans;
        string t;

        select(ans, digits, t, 0);

        return ans;
    }
};
