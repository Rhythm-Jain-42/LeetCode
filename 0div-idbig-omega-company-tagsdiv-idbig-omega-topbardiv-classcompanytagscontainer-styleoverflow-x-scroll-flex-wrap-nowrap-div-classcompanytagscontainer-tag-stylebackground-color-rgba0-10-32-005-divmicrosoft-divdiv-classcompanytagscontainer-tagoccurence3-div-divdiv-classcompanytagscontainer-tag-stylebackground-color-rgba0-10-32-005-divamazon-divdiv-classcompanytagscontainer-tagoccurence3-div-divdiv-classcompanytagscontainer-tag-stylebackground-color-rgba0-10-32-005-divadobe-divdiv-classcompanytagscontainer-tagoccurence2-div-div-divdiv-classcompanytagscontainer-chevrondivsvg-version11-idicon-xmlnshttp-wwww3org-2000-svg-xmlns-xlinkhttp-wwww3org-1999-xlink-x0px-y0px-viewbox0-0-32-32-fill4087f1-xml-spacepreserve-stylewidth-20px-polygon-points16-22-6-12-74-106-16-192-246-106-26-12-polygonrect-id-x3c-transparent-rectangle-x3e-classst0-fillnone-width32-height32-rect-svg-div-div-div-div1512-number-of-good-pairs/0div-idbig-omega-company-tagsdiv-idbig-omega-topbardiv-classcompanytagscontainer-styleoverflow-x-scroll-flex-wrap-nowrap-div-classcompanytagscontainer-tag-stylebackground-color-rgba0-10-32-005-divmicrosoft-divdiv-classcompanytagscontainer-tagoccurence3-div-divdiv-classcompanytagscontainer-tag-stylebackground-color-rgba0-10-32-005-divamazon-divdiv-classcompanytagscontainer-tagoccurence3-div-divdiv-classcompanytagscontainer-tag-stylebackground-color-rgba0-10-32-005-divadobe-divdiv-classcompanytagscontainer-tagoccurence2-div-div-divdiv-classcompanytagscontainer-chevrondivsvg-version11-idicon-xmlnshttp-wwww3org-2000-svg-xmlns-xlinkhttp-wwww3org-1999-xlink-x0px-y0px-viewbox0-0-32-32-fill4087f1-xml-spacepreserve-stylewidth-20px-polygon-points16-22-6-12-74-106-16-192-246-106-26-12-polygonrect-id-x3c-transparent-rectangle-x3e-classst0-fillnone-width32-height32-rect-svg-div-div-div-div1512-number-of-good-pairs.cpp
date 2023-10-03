class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int result=0;
        unordered_map<int, int> map;
        for(int i=0; i<nums.size(); i++)
            map[nums[i]]++;
        for(const auto & i: map)
            result+=(i.second*(i.second-1))/2;
        return result;
    }
};