class Solution {
public:
    string intToRoman(int num) {
        map<int, string, greater<int>>mp;
        mp[1]="I";
        mp[4]="IV";
        mp[5]="V";
        mp[9]="IX";
        mp[10]="X";
        mp[40]="XL";
        mp[50]="L";
        mp[90]="XC";
        mp[100]="C";
        mp[400]="CD";
        mp[500]="D";
        mp[900]="CM";
        mp[1000]="M";

        string ans = "";

        while(num)
        {
            auto i = *mp.lower_bound(num);
            ans += (i.second);
            num -= (i.first);
        }
         return ans;
     }
};