class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0, j=nums.size()-1;
        
        int maxi=0;
        int ans;
        while(i<j){
            ans=nums[i]+nums[j];
            maxi=max(maxi, ans);
            i++;
            j--;
        }
        return maxi;
    }
};