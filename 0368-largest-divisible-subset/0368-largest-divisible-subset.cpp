class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> dp(n,1), hash(n);
        int maxi=0, i;
        for(int ind=0;ind<n;ind++)
        {
            hash[ind]=ind;
            for(int prev=0; prev<ind; prev++)
            {
                if(nums[ind]%nums[prev]==0 && dp[ind]<dp[prev]+1)
                {
                    dp[ind]=dp[prev]+1;
                    hash[ind]=prev;
                }
            }
            if(maxi<dp[ind])
            {
                maxi=dp[ind];
                i=ind;
            }
        }
        vector<int> ans;
        ans.push_back(nums[i]);
        while(hash[i]!=i)
        {
            i=hash[i];
            ans.push_back(nums[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};