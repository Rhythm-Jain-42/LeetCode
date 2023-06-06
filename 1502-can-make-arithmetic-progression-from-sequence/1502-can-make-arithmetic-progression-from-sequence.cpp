class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
	sort(arr.begin(), arr.end());
	int n = arr.size(), diff = arr[1] - arr[0];
	for(int i = 1; i < n; i++) {
		if(arr[i-1] + diff != arr[i]) return false;
	}
	return true;
}
};