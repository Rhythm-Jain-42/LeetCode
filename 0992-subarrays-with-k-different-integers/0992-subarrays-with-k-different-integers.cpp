class Solution {
public:
    int f(vector<int>& nums, int k)
    {
        unordered_map<int, int>mp;
        int left=0 , right=0 , count=0;
        
        while(right<nums.size())
        {
            mp[nums[right]]++;
            while(mp.size()>k)
            {
                mp[nums[left]]--;
                if(mp[nums[left]]==0){
                    mp.erase(nums[left]);
                }
                left++;
            }
            count+=right-left+1;
            right++;
        }
        return count;
    }
    
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return f(nums, k)- f(nums, k-1);
    }
};