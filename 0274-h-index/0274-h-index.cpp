class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int ans=0;
        sort(citations.begin(), citations.end());

        
        for(int i=0; i<n; i++)
        {
            int j=n-i;
            if(citations[i]>=j)
                ans=max(ans, j);
        }
        return ans;
    }
};

// 0 1 3 5 6