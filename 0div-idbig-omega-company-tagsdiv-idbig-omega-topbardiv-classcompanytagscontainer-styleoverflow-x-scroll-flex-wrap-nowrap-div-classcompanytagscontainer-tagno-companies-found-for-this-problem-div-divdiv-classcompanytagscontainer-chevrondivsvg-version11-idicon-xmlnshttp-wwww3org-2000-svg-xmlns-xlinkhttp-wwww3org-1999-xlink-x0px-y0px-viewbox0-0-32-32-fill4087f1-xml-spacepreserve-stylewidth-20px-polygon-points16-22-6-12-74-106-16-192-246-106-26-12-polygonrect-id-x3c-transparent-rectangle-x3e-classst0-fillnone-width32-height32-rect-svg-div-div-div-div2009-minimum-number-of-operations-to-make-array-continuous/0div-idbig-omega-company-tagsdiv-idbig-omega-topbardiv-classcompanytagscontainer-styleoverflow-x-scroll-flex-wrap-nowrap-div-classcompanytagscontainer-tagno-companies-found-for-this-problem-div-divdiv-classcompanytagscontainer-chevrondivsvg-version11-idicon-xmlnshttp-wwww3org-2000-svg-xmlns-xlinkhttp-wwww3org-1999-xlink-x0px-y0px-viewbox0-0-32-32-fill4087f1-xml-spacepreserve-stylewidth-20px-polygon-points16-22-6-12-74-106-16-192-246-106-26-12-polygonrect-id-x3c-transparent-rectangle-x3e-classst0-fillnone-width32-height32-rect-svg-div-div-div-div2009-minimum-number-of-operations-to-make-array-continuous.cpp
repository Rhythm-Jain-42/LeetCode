class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();  
        int ans=n; 
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());

        for(int i=0; i<n; i++) {
            int maxElement=nums[i]+n-1;
            int upperBound=upper_bound(nums.begin(), nums.end(), maxElement)-nums.begin();
            int unique=upperBound-i;
            ans=min(ans, n-unique);
        }
        return ans;
    }
};