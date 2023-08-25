class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i=0;
        bool ans;
        while(i<bits.size()){
            if(bits[i]==0){
                ans=true;
                i++;
            }else{
                ans=false;
                i=i+2;
            }
        }
        return ans;
    }
};