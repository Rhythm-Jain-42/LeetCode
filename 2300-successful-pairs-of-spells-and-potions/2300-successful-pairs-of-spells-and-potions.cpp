class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=potions.size();
        sort(potions.begin(), potions.end());
        vector<int> ans;
        for(long it: spells)
        {
            int start=0;
            int end=n-1;
            int count=0;
            
            while(start<=end)
            {
                int mid=(start+end)/2;
                if(it*potions[mid]>=success)
                {
                    count+=end-mid+1;
                    end=mid-1;
                }
                else
                    start=mid+1;
            }
            ans.push_back(count);
        }
        return ans;
    }
};