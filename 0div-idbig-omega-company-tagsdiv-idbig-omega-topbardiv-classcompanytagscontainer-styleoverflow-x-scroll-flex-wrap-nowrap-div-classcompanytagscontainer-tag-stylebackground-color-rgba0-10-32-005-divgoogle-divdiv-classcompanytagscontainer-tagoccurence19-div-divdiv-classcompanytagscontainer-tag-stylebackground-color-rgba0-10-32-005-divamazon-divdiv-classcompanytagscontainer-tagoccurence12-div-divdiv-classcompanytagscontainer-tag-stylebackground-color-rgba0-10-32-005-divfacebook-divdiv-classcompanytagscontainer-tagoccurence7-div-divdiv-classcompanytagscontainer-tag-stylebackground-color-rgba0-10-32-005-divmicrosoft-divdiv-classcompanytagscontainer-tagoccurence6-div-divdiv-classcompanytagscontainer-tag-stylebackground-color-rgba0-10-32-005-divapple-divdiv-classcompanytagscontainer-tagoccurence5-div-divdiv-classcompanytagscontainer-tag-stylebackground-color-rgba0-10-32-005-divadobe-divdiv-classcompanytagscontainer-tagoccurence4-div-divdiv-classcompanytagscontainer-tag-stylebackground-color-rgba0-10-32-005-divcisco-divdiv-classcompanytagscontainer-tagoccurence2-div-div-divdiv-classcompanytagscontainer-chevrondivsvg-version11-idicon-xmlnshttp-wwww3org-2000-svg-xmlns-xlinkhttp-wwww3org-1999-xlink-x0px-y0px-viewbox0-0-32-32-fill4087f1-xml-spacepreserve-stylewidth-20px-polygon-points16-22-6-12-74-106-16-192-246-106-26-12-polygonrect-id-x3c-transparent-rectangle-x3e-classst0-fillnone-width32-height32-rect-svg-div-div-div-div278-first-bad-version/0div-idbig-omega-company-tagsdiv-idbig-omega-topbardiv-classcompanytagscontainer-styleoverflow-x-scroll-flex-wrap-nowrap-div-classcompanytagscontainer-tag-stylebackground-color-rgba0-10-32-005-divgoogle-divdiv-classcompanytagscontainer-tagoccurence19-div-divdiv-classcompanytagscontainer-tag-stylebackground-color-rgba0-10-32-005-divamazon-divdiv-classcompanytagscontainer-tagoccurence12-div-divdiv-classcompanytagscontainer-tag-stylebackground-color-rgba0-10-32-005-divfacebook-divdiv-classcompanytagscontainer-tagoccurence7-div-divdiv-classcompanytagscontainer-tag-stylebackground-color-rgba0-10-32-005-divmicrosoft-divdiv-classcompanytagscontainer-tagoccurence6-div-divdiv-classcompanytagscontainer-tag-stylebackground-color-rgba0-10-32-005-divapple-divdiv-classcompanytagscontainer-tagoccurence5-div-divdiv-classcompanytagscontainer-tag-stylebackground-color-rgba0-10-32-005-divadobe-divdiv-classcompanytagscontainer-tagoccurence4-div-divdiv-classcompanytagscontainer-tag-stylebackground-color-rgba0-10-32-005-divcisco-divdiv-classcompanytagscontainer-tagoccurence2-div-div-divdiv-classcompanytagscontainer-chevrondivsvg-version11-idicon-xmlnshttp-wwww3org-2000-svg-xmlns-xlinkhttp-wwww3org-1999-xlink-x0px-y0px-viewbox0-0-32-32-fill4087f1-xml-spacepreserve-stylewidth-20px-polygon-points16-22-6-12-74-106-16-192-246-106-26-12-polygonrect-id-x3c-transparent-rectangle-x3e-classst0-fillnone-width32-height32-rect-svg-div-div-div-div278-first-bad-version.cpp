// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long ans=n;
        long long l=1;
        long long  r=n;
        long long mid;
        while(l<=r){
            mid=(l+r)/2;
            if(isBadVersion(mid)){
                ans=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        return ans;
    }
};