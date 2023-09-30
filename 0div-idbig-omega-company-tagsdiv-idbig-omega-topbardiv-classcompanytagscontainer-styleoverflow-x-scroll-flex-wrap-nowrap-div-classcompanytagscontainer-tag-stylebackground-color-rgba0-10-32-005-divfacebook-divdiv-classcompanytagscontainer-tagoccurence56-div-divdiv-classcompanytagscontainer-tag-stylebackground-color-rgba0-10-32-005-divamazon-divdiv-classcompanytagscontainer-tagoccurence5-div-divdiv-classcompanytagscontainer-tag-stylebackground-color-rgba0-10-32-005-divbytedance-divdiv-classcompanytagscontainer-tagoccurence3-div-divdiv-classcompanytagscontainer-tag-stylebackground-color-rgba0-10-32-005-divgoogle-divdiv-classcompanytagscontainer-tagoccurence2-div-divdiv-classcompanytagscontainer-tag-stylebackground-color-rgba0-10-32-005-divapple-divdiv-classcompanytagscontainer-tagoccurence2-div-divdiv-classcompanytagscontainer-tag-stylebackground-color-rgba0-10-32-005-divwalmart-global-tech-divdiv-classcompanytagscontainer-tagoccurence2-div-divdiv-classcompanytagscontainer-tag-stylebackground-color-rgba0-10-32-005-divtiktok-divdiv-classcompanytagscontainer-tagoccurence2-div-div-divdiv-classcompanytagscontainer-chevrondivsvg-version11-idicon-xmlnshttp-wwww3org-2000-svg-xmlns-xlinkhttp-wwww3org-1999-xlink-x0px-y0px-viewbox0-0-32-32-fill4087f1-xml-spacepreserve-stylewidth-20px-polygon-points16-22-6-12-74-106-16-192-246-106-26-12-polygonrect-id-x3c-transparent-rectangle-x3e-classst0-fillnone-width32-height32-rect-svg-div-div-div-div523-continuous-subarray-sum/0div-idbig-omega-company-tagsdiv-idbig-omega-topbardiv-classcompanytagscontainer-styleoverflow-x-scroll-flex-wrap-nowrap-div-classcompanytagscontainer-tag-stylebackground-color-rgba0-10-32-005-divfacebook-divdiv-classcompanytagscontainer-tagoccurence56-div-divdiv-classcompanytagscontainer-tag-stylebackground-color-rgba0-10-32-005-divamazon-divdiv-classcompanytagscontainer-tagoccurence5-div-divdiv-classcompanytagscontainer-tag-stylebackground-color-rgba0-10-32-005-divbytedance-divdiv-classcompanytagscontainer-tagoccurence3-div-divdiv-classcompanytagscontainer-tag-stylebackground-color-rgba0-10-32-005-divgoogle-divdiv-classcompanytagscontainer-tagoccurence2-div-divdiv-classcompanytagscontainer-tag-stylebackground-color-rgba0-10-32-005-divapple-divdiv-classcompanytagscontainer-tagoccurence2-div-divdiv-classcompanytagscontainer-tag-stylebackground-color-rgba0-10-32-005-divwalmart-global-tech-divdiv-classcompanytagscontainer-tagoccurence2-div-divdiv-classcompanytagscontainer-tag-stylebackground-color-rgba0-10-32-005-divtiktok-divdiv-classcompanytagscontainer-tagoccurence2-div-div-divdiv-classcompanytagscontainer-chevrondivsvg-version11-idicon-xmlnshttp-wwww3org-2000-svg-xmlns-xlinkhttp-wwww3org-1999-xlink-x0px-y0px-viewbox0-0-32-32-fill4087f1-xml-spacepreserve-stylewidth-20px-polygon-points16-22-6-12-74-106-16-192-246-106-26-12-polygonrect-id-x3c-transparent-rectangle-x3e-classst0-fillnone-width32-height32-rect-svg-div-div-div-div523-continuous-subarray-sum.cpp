class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0]=-1;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(mp.find(sum%k)==mp.end())
                mp[sum%k]=i;
            else if(mp[sum%k]<i-1)
                return true;
        }
        return false;
    }
};