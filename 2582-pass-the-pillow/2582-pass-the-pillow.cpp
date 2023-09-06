class Solution {
public:
    int passThePillow(int n, int time) {
        int i=1;
        while(time){
            if(i==1){
                int val = min(time,n-1);
                i+=val;
                time-=val;
            }
            if(i==n){
                int val = min(time,n-1);
                i-=val;
                time-=val;
            }
        }        
        return i;
        
    }
};