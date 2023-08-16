class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());
        vector<int> ans;
        for(auto i : s1) if(s2.count(i)) ans.push_back(i);
        return ans;
    }
};