class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        
        int start = pairs[0][0];
        int end = pairs[0][1];
        int cnt = 1;
        for(int i = 1;i < pairs.size();i++){
            if(pairs[i][0] > start && pairs[i][1] < end){
                end = pairs[i][1];
                continue;
            }
            else if(end < pairs[i][0]){
                cnt++;
                end = pairs[i][1];
            }
        }

        return cnt;
        
    }
};