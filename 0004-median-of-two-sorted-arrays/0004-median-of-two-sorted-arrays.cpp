class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        for(auto it: nums1) vec.push_back(it);
        for(auto it: nums2) vec.push_back(it);
        sort(vec.begin(), vec.end());
        int n=vec.size();
        return n%2?vec[n/2]:(vec[n/2-1]+vec[n/2])/2.0;
    }
};