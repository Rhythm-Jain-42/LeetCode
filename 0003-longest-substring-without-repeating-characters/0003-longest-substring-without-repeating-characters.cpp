class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> vec(256, -1);

        int left = 0, right = 0;
        int sz = s.size();
        int len = 0;

        while(right < sz){
          if(vec[s[right]] != -1) {
            left = max(vec[s[right]]+1, left);
          }
            vec[s[right]] = right;

            len = max(len, right-left+1);
          right++;
        }
        return len;
    }
};