class Solution {
public:

    bool isPali(int i, int e, string s) {
        while(i<=e) {
            if(s[i]==s[e]) {
                i=i+1;
                e=e-1;
            }
            else return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int e=s.size()-1;

        while(i<=e){
            if(s[i]==s[e]){
                i=i+1;
                e=e-1;
            }

            else{
                bool check1=isPali(i,e-1,s);
                bool check2=isPali(i+1,e,s);

                if(check1==true || check2==true) return true;
                else return false;
            }
        }
        return true;
    }
};