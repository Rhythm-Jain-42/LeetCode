class Solution {

void f(int ind,vector<int> &arr, vector<vector<int>> &ans, vector<int> &v, int target)
{
    
    if(target==0){
        ans.push_back(v);
    return ;
    }
    
    for(int i=ind;i<arr.size();i++){
        if(i>ind && arr[i]==arr[i-1])continue;
        if(target<arr[i])break;
        v.push_back(arr[i]);
        f(i+1,arr,ans,v,target-arr[i]);
        v.pop_back();
    }
}    
public:
vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>v;
        f(0,candidates,ans,v,target);
        return ans;
    }
};