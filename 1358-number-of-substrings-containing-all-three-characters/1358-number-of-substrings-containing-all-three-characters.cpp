class Solution {
public:
    int numberOfSubstrings(string s) {
        int left = 0, right = 0, count = 0, n= s.size();
        unordered_map<char,int>mp;

        while(right<n){
            mp[s[right]]++;
            while(mp['a'] && mp['b'] && mp['c']){
                count+=n-right;
                mp[s[left]]--;
                left++;
            }
            right++;
        }
        return count;
    }
};