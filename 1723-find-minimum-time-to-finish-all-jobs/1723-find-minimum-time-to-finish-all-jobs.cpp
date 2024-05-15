class Solution {
    int solve(vector<int>&jobs,vector<int>&v,int i,int mid){
        if(i>=jobs.size())return 1;
        for(int j=0;j<v.size();j++){
            if(v[j]+jobs[i]<=mid){
                v[j]+=jobs[i];
                if(solve(jobs,v,i+1,mid))
                    return 1;
                v[j]-=jobs[i];
                if(v[j]==0)return 0;
            }
        }
        return 0;
    }
public:
    int minimumTimeRequired(vector<int>& jobs, int k) {
        int n=jobs.size();
        sort(jobs.begin(),jobs.end());
        int i,j,l,h;
        l=jobs[0];
        h=accumulate(jobs.begin(),jobs.end(),0);
        j=h;
        while(l<=h){
            int mid=l+(h-l)/2;
            vector<int>v(k,0);
            if(solve(jobs,v,0,mid)){
                j=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return j;
    }
};