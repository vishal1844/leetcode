class Solution {
    bool solve(int mid,vector<int>&tasks,vector<int>&workers,int pills,int strength){
        int n=tasks.size();
        int m=workers.size();
        multiset<int>ms(workers.begin(),workers.end());
        int cnt=0;
        int c=0;
        for(int i=mid;i>=0;i--){
            auto itr=ms.end();
            itr--;
            if(*itr>=tasks[i]){
                ms.erase(itr);
                continue;
            }
            auto it=ms.lower_bound(tasks[i]-strength);
            if(it!=ms.end()){
                ms.erase(it);
                c++;
            }
            else{
                cnt=1;
                break;
            }
        }
       if(cnt)return 0;
        return c<=pills;      
         

    }
public:
    int maxTaskAssign(vector<int>& tasks, vector<int>& workers, int pills, int strength) {
        int n=workers.size();
        int m=tasks.size();
        int l=0;
        int h=min(n,m);
        h--;
        int ans=0;
        sort(tasks.begin(),tasks.end());
        sort(workers.begin(),workers.end());
        while(l<=h){
            int mid=l+(h-l)/2;
            if(solve(mid,tasks,workers,pills,strength)){
                ans=mid+1;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return ans;
    }
};