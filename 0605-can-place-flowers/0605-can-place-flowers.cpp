class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int x=flowerbed.size();
        if (n == 0) return true;
        for(int i=0;i<x;i++)
        {
            if(flowerbed[i]==0 && ((i==0 || flowerbed[i-1]==0) && 
                                   (i==x-1 || flowerbed[i+1]==0)))
            {
                n--;
                if(n==0) return true;
                flowerbed[i]=1;
            }
        }
        return false;
    }
};