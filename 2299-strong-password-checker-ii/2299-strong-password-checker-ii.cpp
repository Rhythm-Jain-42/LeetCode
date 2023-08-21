class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if(password.size()<8) return false;
        bool lc=false, uc=false, digit=false, sc=false;
        for(int i=0;i<password.size()-1;i++)
            if(password[i]==password[i+1]) return false;
        
        for(int i=0;i<password.size();i++)
        {
            if(password[i]>='a' && password[i]<='z') lc=true;
            else if(password[i]>='A' && password[i]<='Z') uc=true;
            else if(password[i]>='0' && password[i]<='9') digit=true;
            else sc=true;
        }
        
        if(lc && uc && digit && sc) return true;
        else return false;
    }
};