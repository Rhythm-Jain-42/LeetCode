class Solution 
{
public:
    int binaryGap(int n) 
    {
        int i=0;
        int li=-1;
        int ans = 0;
        while(n>0)
        {
            if(n%2)
            {
                if(li==-1)
                {
                    li=i;
                }
                else
                {
                    ans = max(i-li, ans);
                    li=i;
                }            
            }
            n/=2;
            i++;
        }
        

        // std::cout<<;        
        return ans;
    }
};