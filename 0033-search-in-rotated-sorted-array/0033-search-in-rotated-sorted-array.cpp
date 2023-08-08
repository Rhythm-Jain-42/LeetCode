class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0,hi=nums.size()-1;
        while(lo<=hi)
        {
            int mid=(lo+hi)>>1;
            if(nums[mid]==target) return mid;
            
            if(nums[lo]<=nums[mid])
            {
                if(target<=nums[mid] && target>=nums[lo])
                    hi=mid-1;
                else 
                    lo=mid+1;
            }
            else
            {
                if(nums[mid]<=target && nums[hi]>=target)
                    lo=mid+1;
                else
                    hi=mid-1;
            }
        }
        return -1;
    }
};