class Solution {
public:
    int f(vector<int>& nums, int k)
    {
        int left=0, right=0, ans=0, count=0;
        
        while(right<nums.size())
        {
            if(nums[right]%2!=0) count++;
            while(count>k)
            {
                if(nums[left]%2!=0) count--;
                left++;
            }
            ans+=right-left+1;
            right++;
        }
        return ans;
    }
    
    int numberOfSubarrays(vector<int>& nums, int k) {
        return f(nums, k)-f(nums, k-1);
    }
};