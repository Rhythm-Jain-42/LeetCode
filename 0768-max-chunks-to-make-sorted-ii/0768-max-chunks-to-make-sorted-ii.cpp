class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        vector<int> prefixmax(n), suffixmin(n);
        
        prefixmax[0]=arr[0];
        for(int i=1; i<n; i++){
            prefixmax[i]=max(prefixmax[i-1], arr[i]);
        }
        
        suffixmin[n-1]=arr[n-1];
        for(int i=n-2; i>=0; i--){
            suffixmin[i]=min(suffixmin[i+1], arr[i]);
        }
        
        int ans=1;
        for(int i=0; i<n-1; i++){
            if(prefixmax[i]<=suffixmin[i+1])
                ans++;
        }
        
        return ans;
    }
};