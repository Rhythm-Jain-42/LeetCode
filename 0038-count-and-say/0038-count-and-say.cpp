class Solution {
public:
        string count(string s)
        {  
            string ans="";
         
            for(int i=0; i<s.size(); i++)
            {
                  int c=1;
                while(i<s.size()-1 && s[i]==s[i+1])
                    {
                        c++;
                        i++;
                    }
                    string t=to_string(c);
                    ans+=t;
                    ans+=s[i];
            }
            return ans;
        }
       
    string countAndSay(int n) {
        string s="1";
        if(n==1)
         return s;
         
             for(int i=2; i<=n; i++)
             {
                    string t=count(s);
                    s=t;
             }
         return s;
        
    }
};