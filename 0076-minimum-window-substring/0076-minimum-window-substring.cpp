class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> mp(128, 0);
        for(auto it: t) mp[it]++;
        
        int left=0, right=0, count=t.size(), minStart=0, minLen=INT_MAX;
        
        while(right<s.size())
        {
            if(mp[s[right]]>0) count--;
            mp[s[right]]--;
            right++;
            
            while(count==0)
            {
                if(right-left<minLen)
                {
                    minStart=left;
                    minLen=right-left;
                }
                mp[s[left]]++;
                if (mp[s[left]] > 0)
				    count++;
			    left++;
            }
        }
        if (minLen!=INT_MAX)
		    return s.substr(minStart, minLen);
	    return "";
    }
};