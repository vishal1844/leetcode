class Solution {
    bool solve(int mid,int n,int k,int budget,vector<vector<int>>&composition,vector<int>&stock,vector<int>&cost){
        long long int i,j,l,m,t=0;
        long long int ans=INT_MAX;
        for(i=0;i<k;i++){
            t=0;
            for(j=0;j<n;j++){
                l=(1ll*composition[i][j]*mid);
                if(l>stock[j]){
                    t+=(1ll*(l-stock[j])*cost[j]);
                }
            }
            ans=min(ans,t);
        }
        return ans<=budget;
    }
public:
    int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
        int l=0,h=1e9;
        int ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(solve(mid,n,k,budget,composition,stock,cost)){
                ans=mid;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return h;
    }
};