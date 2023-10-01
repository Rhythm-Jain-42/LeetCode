class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        string ans;
        for(auto it : s)
        {
            if(it=='(')
            {
                if(count++)
                {
                    ans+='(';
                }
            }
            else
            {
                if(--count)
                    ans+=')';
            }
        }
        return ans;
    }
};