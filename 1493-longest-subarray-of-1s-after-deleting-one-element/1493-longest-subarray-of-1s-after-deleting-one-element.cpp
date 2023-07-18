class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        int count=0;
        int left=0;
        int right=0;
        while(right<n){
            if(nums[right]==0) count++;
            if(count<=1){
                ans= max(ans,right-left);
                right++;
            }
            else{
            while(count>1){
                if(nums[left]==0) count--;
                left++;
            }
                ans= max(ans,left-right);
                right++;
            }
            
        }
        return ans;
    }
};