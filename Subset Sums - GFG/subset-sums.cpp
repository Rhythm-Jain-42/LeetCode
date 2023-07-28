//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void solve( vector<int> &arr, int N, vector<int> &ans, int ind, int sum)
    {
        //base case
        if(ind==N)
        {
            ans.push_back(sum);
            return;
        }
        
        //pick
        solve(arr,N,ans,ind+1,sum+arr[ind]);
        
        
        //notpick
        solve(arr,N,ans,ind+1,sum);
        
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        int sum=0;
        int ind=0;
        
        solve(arr,N,ans,ind,sum);
 
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends