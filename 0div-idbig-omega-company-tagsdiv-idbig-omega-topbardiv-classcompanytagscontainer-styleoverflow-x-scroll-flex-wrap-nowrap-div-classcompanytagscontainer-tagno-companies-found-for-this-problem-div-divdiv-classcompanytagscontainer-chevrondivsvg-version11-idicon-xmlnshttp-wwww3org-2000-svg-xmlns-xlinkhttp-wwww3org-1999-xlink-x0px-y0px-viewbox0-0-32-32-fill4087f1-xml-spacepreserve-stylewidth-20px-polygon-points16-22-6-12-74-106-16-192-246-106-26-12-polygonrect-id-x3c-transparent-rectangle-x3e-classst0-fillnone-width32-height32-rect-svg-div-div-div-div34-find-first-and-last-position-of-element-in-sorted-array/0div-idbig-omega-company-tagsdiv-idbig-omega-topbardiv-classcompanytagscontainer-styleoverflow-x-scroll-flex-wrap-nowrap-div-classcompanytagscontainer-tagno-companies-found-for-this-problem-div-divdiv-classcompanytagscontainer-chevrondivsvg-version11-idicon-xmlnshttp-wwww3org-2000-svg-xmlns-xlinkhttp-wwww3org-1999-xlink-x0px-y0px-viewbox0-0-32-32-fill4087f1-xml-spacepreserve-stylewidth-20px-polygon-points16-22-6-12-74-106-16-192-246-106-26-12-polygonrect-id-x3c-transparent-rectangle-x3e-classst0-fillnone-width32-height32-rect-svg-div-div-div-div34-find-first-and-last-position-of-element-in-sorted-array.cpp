class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int count=0,ans;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]<=target)
                {
                    if(nums[i]==target)
                    {
                        count++;
                        ans=i;
                    }
                }
                else
                    break;
            }
        if(count==0) return {-1,-1};
        else return {ans-count+1,ans};
    }
};