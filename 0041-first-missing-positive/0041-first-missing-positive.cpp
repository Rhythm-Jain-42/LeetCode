class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        int n = nums.size();
        int i=0;

        while(i<n)
        {
            int val = nums[i];

            if(val<=n && val>0 &&nums[i]!=nums[val-1])
            {
                swap(nums[val-1],nums[i]);
            }
            else
            {
                i++;
            }
        }

        for(int i=0;i<n;i++)
        {
            if(i+1 !=nums[i])
            {
                return i+1;
            }
        }    

        return n+1;
    }
};