class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>r;
        for(int i=0;i<nums.size();i++)
        {
            r.insert(nums[i]);
        }

        return r.size()!=nums.size();
    }
};