class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int right = 0, left = 0;
        int zero = 0, maxOne = 0;

        while(right < nums.size()){
            if(nums[right] == 0) zero++;

            while(zero > k){
                if(nums[left] == 0){
                    zero--;
                }
                left++;
            }

            maxOne = max(maxOne, right-left+1);
            right++;
        }
        return maxOne;
    }
};