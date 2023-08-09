class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> r;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            if(r.count(nums[i]))
            {
                if(abs(i-r[nums[i]])<=k)
                    return true;
            }
         r[nums[i]]=i;
        }
        return false;
    }
};