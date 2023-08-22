class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int i=0, j=nums.size()-1;
        int mini=INT_MAX;
        int ans;
        for(int i=0; i<nums.size(); i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(target-sum)<mini){
                    ans=sum;
                    mini=abs(target-sum);
                }
                if(sum<target)
                    j++;
                else
                    k--;
            }
        }
        return ans;
    }
};