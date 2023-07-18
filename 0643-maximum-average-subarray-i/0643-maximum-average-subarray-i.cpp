class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0,j=0;
        double sum=0;
        double c=0;
        double maxi=INT_MIN;
        while(j<nums.size()){
            sum=sum+nums[j];
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                c=sum/k;
                maxi=max(c,maxi);
                sum=sum-nums[i];
                i++;
                j++;
            }
        }
        return maxi;
    }
};