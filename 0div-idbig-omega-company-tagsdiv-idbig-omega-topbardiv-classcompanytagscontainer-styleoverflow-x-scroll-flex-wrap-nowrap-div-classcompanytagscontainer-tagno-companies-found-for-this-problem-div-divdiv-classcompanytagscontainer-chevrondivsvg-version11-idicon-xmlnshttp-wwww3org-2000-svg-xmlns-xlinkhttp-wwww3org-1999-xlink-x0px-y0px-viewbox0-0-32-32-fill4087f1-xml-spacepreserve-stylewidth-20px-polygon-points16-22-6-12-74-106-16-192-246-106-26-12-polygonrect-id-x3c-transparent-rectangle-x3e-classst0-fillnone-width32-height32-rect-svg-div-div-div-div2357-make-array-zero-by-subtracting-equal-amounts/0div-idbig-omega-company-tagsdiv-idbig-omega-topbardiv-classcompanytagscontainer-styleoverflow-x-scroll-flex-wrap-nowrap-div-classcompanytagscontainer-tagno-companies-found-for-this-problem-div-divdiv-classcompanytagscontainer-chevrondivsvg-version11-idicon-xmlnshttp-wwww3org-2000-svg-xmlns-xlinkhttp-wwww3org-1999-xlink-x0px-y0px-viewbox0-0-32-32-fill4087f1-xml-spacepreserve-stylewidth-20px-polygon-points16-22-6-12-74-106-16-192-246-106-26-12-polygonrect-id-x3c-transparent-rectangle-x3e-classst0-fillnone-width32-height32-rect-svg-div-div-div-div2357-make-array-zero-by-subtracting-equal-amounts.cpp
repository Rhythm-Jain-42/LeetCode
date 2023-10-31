class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int>s;
        int count=0;
        for(auto it:nums)
            s.insert(it);
        for(auto it: s){
            if(it!=0){
                count++;
            }
        }
        return count;
    }
};