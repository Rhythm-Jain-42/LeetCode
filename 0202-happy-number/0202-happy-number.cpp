class Solution {
public:
    bool isHappy(int n) {
        
        if (n<7)
        {
            if (n==1)
            return true;
            else
            return false;
        }
        int sum=0;
        while (n>0)
        {
            int r=n%10;
            sum=sum+r*r;
            n=n/10;
        }
        return isHappy(sum);
    }
};