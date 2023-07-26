class Solution {
    bool solve(vector<int>&dist,double hour,int mid){
        double k,l,t=0;
        int i,j;
        for(i=0;i<dist.size()-1;i++){
            k=ceil((dist[i]*1.00)/mid);
            t+=k;
        }
        k=((1.00*dist[i])/mid);
        t+=k;
       // cout<<t<<" ";
        return t<=hour;
    }
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n=dist.size();
        int l=1,h=1e9,t=INT_MAX;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(solve(dist,hour,mid)==1){
                t=min(t,mid);
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(t==INT_MAX){
            return -1;
        }
        return t;
    }
};