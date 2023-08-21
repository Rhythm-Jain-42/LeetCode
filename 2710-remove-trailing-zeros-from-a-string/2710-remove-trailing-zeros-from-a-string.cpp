class Solution {
public:
    string removeTrailingZeros(string num) {
        int i=num.size()-1;
        while(num[i]=='0') i--;
        string ans="";
        for(int j=0; j<=i; j++)
            ans+=num[j];
        return ans;
    }
};