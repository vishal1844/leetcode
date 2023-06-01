class Solution {
    bool solve(vector<int>&dist,double hour,int mid){
        int i,j,k,l;
        double t=0;
        for(i=0;i<dist.size()-1;i++){
            t+=ceil((1.0*dist[i])/mid);
        }
        t+=(dist[i])/(1.00*mid);
        //cout<<t<<" "<<mid<<endl;
        return t<=hour;
    }
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int l=1,h=1e7,i,j,k=1e8;
        //sort(dist.begin(),dist.end());
        while(l<=h){
            int mid=l+(h-l)/2;
            //cout<<mid<<" ";
            if(solve(dist,hour,mid)){
                k=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(k==1e8)return -1;
        return k;
    }
};
