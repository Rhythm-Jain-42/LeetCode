class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int start=0, end=0, prod=1, ans=0;
        while(end<nums.size()){
            prod*=nums[end];
            
            while(start<=end && prod>=k){
                prod/=nums[start];
                start++;
            }
            
            if(prod<k) ans+=end-start+1;
            end++;
        }
        return ans;
    }
};