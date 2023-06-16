class Solution {
    const int mod = 1e9 + 7;
    long inverse(long num) {
        if (num == 1) {
            return 1;
        }
        return mod - mod / num * inverse(mod % num) % mod;
    }

    int dfs(vector<int>& nums) {
        int N = nums.size();
        if (N <= 2)  return 1;
        
        vector<int> left, right;
        for (int i = 1; i < N; i++) 
        {
            if (nums[i] < nums[0]) 
                left.push_back(nums[i]);
            else 
                right.push_back(nums[i]);
         }

        int a = left.size();
        int b = right.size();
        long res = 1;
        for (int i = b+1; i <= a + b; i++) res = res * i % mod;
        
        for (int i = 1; i <= a; i++)  res = res * inverse(i) % mod;
        
        return res * dfs(left) % mod * dfs(right) % mod;
    }
    
public:
    int numOfWays(vector<int>& nums) {
        return dfs(nums) - 1;
    }
};