class Solution {
    
public:
    long long maximumSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>v;
        int i,j,k,l,m;
        long long t=0;
        long long ans=0;
        for(i=1;i*i<=n;i++){
            v.push_back(i*i);
        }
            for(j=1;j<=n;j++){
                t=0;
                for(auto itr:v){
                    if(j*itr<=(1ll*n)){
                        cout<<nums[(j*itr)-1]<<" ";
                        t+=(long long)(nums[(j*itr)-1]);
                    }
                    else{
                        break;
                    }
                }
                ans=max(ans,t);
            }
        return ans;
    }
        // for(i=0;i<n;i++){
        //     double p=sqrt(i+1);
        //     int q=(int)p;
        //     double f=p-q;
        //     if(f==0.0){
        //     for(j=0;j<n;j++){
        //         if(!(i==j)){
        //             p=sqrt(j+1);
        //             q=(int)p;
        //             f=p-q;
        //             if(f==0.0){
        //                 cout<<nums[i]<<" "<<nums[j]<<endl;
        //                 t=max(t,nums[i]+nums[j]);
        //             }
        //         }
        //     }
        //     }
        // }
        // return t;
};


