class Solution {
    bool eatAllBananas(vector<int>&piles,int h,int mid){
        for(int i=0;i<piles.size();i++){
            if(h<=0)return false;
            if(piles[i]<=mid){
                h--;
            }
            else{
                h-=(piles[i]/mid);
                if(piles[i]%mid){
                    h--;
                }
            }
        }
        if(h>=0)return true;
        return false;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(eatAllBananas(piles,h,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};