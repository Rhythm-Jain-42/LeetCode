class Solution {
public:
    int secondHighest(string s) {
        vector<bool> d(10, false);
        for (char c: s) {
            if (c>='0' && c<='9') {
                d[c-'0']=true;
            }
        }

        bool fistDigitFound=false;
        for (int i=9; i>=0; i--) {
            if (d[i] && !fistDigitFound) {
                fistDigitFound = true;
            } 
            else if (d[i] && fistDigitFound) {
                return i;
            }
        }
        return -1;        
    }
};