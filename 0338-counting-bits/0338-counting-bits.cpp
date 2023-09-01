class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> output(n+1, 0);
        for(int i=0; i<=n; i++){
            long long count=0, j=i;
            while(j!=0){
                j &= (j-1);
                count++;
            }
            output[i] = count;
        }
        return output;
    }
};