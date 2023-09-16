class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        int n=gifts.size();
        for(auto g:gifts){
            pq.push(g);
        }
        while(k-->0){
            int n=pq.top();pq.pop();
            pq.push(sqrt(n));
        }
        long long ans=0;
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};