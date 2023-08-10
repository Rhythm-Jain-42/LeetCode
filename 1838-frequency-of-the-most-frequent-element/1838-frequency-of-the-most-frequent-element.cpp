class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long i=0,j=0;
        long long result=0,total=0;

        while(j<nums.size()){
            total+=nums[j];
            while(nums[j]*(j-i+1) > total + k){
                total-=nums[i];
                i++;
            }
            result = max(result,j-i+1);
            j++;
        }
            return result;
    }
};