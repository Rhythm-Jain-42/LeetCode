class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int, double>>> adj(n);
        for (int i = 0; i < edges.size(); i++) {
            adj[edges[i][0]].push_back({edges[i][1], succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }
        
        vector<double>dist(n, 0.0);
        dist[start]=1.0;
        queue<int>q;
        q.push(start);
        
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            
            for(auto it: adj[curr])
            {
                int nxt=it.first;
                double prob=it.second;
                double new_prob=dist[curr]*prob;
                
                if(new_prob>dist[nxt])
                {
                    dist[nxt]=new_prob;
                    q.push(nxt);
                }
            }
        }
        return dist[end];
            
    }
};