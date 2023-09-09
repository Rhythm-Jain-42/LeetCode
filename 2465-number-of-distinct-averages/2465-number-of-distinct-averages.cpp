class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<double> st;
        sort(nums.begin(), nums.end());
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            double avg=((double)nums[left]+(double)nums[right])/2;
            st.insert(avg);
            left++;
            right--;
        }
        return st.size();
    }
};