class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n);
        dp[0] = 1;
        return nthUglyNumberRecursive(dp, n, 1, 0, 0, 0);
    }

private:
    int nthUglyNumberRecursive(vector<int>& dp, int n, int i, int p1, int p2, int p3) {
        if (i == n) {
            return dp[n - 1];
        }

        int twoMultiple = dp[p1] * 2;
        int threeMultiple = dp[p2] * 3;
        int fiveMultiple = dp[p3] * 5;

        dp[i] = min(twoMultiple, min(threeMultiple, fiveMultiple));

        int nextP1 = (dp[i] == twoMultiple) ? p1 + 1 : p1;
        int nextP2 = (dp[i] == threeMultiple) ? p2 + 1 : p2;
        int nextP3 = (dp[i] == fiveMultiple) ? p3 + 1 : p3;

        return nthUglyNumberRecursive(dp, n, i + 1, nextP1, nextP2, nextP3);
    }
};
