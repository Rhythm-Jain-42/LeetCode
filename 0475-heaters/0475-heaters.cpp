class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(), heaters.end());
        int ans=0;
        for(int i=0; i<houses.size(); i++)
        {
            int start=0;
            int end=heaters.size()-1;
            int curr_rad=INT_MAX;
            while(start<=end)
            {
                int mid=start+(end-start)/2;
                if(houses[i]==heaters[mid])
                {
                    curr_rad=0;
                    break;
                }
                else
                {
                    int diff=abs(houses[i]-heaters[mid]);
                    curr_rad=min(curr_rad, diff);
                    if(houses[i]>heaters[mid]) start=mid+1;
                    else if(houses[i]<heaters[mid]) end=mid-1;
                }
            }
            ans=max(ans, curr_rad);
        }
        return ans;
    }
};