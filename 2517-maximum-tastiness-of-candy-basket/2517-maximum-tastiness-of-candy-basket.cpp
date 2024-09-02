class Solution {
    bool solve(int mid,vector<int>&price,int k){
        int i,j,l,m,t=1;
        j=0;
        for(i=0;i<price.size();i++){
            if(price[i]-price[j]>=mid){
                t++;
                j=i;
            }
            if(t==k)return 1;
        }
        return 0;
    }
public:
    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(),price.end());
        int i,j,l,m,t=0;
        l=0;
        int ans=-1;
        int h=*max_element(price.begin(),price.end());
        while(l<=h){
            int mid=l+(h-l)/2;
            if(solve(mid,price,k)){
                ans=mid;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
    }
};