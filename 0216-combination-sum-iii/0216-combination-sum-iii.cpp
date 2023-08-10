class Solution {
public:
    vector<vector<int>>res;
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> temp;
        combinationSum3Util(k, n, 1, 0, temp);
        return res;
    }

    void combinationSum3Util(int k, int n, int start, int sum, vector<int>& temp) {
        if(k==0) {
            if(sum==n) {
                res.push_back(temp);
            }
            return;
        }
        if(sum>n || k<0) return;
        for(int i=start;i<=9;i++) {
            temp.push_back(i);
            combinationSum3Util(k-1, n, i+1, sum+i, temp);
            temp.pop_back();
        }
    }
};