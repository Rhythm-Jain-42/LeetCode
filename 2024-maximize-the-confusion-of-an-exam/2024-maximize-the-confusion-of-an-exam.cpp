class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n=answerKey.size();
        int start=0;
        int end=0;
        int ans=INT_MIN;
        int t=0;
        int f=0;
        
        while(end<n)
        {
            if(answerKey[end]=='T') t++;
            else f++;
            
            while(t>k && f>k)
            {
                if(answerKey[start]=='T') t--;
                else f--;
                start++;
            }
            ans=max(ans,end-start+1);
            end++;
        }
        return ans;
    }
};