class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.size();
        if(k>n){
            reverse(s.begin(), s.end());
            return s;
        }
        int i=0;
        while(i<n){
            reverse(s.begin()+i, s.begin()+min(n, i+k));
            i+=2*k;
        }
        return s;
    }
};