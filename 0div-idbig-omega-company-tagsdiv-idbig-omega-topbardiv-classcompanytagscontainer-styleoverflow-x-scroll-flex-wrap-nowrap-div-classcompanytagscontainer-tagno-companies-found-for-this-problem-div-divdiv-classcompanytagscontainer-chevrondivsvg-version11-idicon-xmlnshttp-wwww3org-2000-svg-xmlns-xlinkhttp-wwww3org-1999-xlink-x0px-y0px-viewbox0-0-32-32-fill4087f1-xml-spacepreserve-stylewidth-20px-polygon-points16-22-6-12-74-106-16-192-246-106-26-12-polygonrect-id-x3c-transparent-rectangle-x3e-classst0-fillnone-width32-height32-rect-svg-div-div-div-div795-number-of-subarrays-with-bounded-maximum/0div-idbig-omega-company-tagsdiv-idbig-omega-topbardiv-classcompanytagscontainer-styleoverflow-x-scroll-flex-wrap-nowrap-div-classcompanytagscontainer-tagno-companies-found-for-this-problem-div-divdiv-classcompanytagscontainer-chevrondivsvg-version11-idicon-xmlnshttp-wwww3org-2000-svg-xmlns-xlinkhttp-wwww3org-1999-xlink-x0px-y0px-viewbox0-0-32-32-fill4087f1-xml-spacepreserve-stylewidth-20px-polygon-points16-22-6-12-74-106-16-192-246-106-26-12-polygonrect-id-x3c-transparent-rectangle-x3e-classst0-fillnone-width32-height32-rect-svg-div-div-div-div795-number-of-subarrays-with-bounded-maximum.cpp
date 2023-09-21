class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int i=0;
        int ans=0;
        int prevcount=0;
        for(int j=0; j<nums.size(); j++){
            if(nums[j]>=left && nums[j]<=right){
                ans+=j-i+1;
                prevcount=j-i+1;
            }
            else if(nums[j]<left){
                ans+=prevcount;
            }
            else{
                i=j+1;
                prevcount=0;
            }
        }
        return ans;
    }
};