class Solution {
public:
    int mod = 1e9+7;
    int solve(int idx,int prevCost,int prevMax,int n,int m,int k,vector<vector<vector<int>>>& mem){
        if(prevCost > k){
            return 0;
        }
        if(idx >= n){
            if(prevCost == k){
                return 1;
            }
            else{
                return 0;
            }
        }

        if(mem[idx][prevMax][prevCost] != -1){
            return mem[idx][prevMax][prevCost];
        }

        int ans = 0;

        for(int i = 1;i <= m;i++){
            if(i > prevMax){
                ans = (ans + solve(idx+1,prevCost+1,i,n,m,k,mem)%mod)%mod;
            }
            else{
                ans = (ans + solve(idx+1,prevCost,prevMax,n,m,k,mem)%mod)%mod;
            }
        }

        return mem[idx][prevMax][prevCost] = ans;
    }
    int numOfArrays(int n, int m, int k) {
        vector<vector<vector<int>>> mem(n+1,vector<vector<int>>(m+1,vector<int>(k+1,-1)));

        return solve(0,0,0,n,m,k,mem);

    }
   
};