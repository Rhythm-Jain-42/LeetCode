class Solution {
public:
    string convertToBase7(int num) {
       if(num==0) return "0";
       string s;
       int n=abs(num);
        while(n!=0){
            s.push_back(n%7+'0');
            n/=7;
        }
        if(num<0){
            s.push_back('-');
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
