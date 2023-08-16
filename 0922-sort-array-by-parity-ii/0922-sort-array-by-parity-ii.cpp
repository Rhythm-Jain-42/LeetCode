class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int e=0, o=1;
        vector<int> ans(nums.size());
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                ans[e]=nums[i];
                e+=2;
            }
            else if(nums[i]!=0){
                ans[o]=nums[i];
                o+=2;
            }
        }
        return ans;
    }
};