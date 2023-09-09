class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<float> st;
        sort(nums.begin(), nums.end());
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            double avg=((float)nums[left]+(float)nums[right])/2;
            st.insert(avg);
            left++;
            right--;
        }
        return st.size();
    }
};