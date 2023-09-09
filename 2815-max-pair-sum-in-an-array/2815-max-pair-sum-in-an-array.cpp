class Solution {
public:
    int f(int num){
        int maxi=0;
        while(num){
            maxi=max(maxi, num%10);
            num/=10;
        }
        return maxi;
    }
    
    int maxSum(vector<int>& nums) 
    {
        vector<vector<int>> pairs(10);
        for (int n:nums)
        {
            pairs[f(n)].push_back(n);
        }

        int res=-1;
        for (int i=0; i<pairs.size(); i++)
        {
            if (pairs[i].size()<2)
            {
                continue;
            }

            sort(pairs[i].begin(), pairs[i].end(), greater<int>());
            res=max(res, pairs[i][0]+pairs[i][1]);
        }
        return res;
    }
};