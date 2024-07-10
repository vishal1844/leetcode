class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double ans;
       long long int sum=0;
        int i,j,k,l,m=0,t=0;
        for(auto itr:customers){
            k=itr[0];
            l=itr[1];
            if(k>t){
                m=k;
                t=m+l;
            }
            else{
                m=k;
                t+=l;
            }
            sum+=(t-m);
        }
        int n=customers.size();
        ans=(1.0*sum)/n;
        return ans;
    }
};