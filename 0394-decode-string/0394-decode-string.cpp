class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        for(auto ch:s)
        {
            if(ch==']')
            {
                string stringToRepeat="";
                while(!st.empty()&&st.top()!="[")
                {
                    string top=st.top();
                    stringToRepeat+=top;
                    st.pop();
                }
                st.pop();
                string numericValue="";
                while(!st.empty()&&isdigit(st.top()[0]))
                {
                    numericValue+=st.top();
                    st.pop();
                }
                reverse(numericValue.begin(),numericValue.end());
                int n=stoi(numericValue);

                string str="";
                while(n--) str+=stringToRepeat;
                st.push(str);
            }
            else
            {
                string temp(1,ch);
                st.push(temp);
            }
        }
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
