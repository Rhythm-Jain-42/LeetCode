class Solution {
public:
    int maximumSwap(int num) {
        int ans=num;
        string s=to_string(num);
        
        for(int i=0; i<s.size()-1; i++){
            for(int j=i+1; j<s.size(); j++){
                string temp=s;
                swap(temp[i], temp[j]);
                ans=max(ans, stoi(temp));
            }
        }
        return ans;
    }
};