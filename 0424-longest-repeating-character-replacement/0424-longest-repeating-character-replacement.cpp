class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0; int right=0;
        int ans=0; int res=0;
        unordered_map<char, int>mp;
        
        while(right<s.size())
        {
            mp[s[right]]++;
            ans=max(ans,mp[s[right]]);
            if(right-left+1-ans>k)
            {
                mp[s[left]]--;
                left++;
            }
            res=max(res, right-left+1);
            right++;
        }
        return res;
    }
};