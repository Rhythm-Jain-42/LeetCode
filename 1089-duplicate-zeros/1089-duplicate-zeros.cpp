class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int> result;
        
        for (int i = 0; i < n; i++) {
            result.push_back(arr[i]);
            if (arr[i] == 0) {
                result.push_back(0);
            }
        }
        for (int i = 0; i < n; i++) {
            arr[i] = result[i];
        }
    }
};