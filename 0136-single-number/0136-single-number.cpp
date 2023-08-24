class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xr=0;
        for(auto it: nums){
            xr=xr^it;
        }
        return xr;
    }
};