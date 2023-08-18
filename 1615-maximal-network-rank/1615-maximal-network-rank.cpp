class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int>Network(n,0);
        vector<vector<bool>>connected(n,vector<bool>(n,false));
        for(int i=0;i<roads.size();i++){
            connected[roads[i][0]][roads[i][1]]=true;
            connected[roads[i][1]][roads[i][0]]=true;
            Network[roads[i][0]]++;
            Network[roads[i][1]]++;
        }
        int maxrank=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int i_rank=Network[i];
                int j_rank=Network[j];
                int rank=i_rank+j_rank;
                if(connected[i][j])rank--;
                maxrank=max(maxrank,rank);
            }  
        }
    return maxrank;
    }
};