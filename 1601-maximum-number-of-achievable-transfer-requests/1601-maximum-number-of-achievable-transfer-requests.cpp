class Solution {
    vector<int>v;
    int c=0;
    void solve(int i,int m,int&t,int n,vector<vector<int>>&requests){
        if(i==requests.size()){
            for(auto itr:v){
                if(itr)return;
            }
            t=max(t,m);
            return;
        }
        v[requests[i][0]]--;
        v[requests[i][1]]++;
        solve(i+1,m+1,t,n,requests);
        v[requests[i][0]]++;
        v[requests[i][1]]--;
        solve(i+1,m,t,n,requests);
    }
public:
    int maximumRequests(int n, vector<vector<int>>& requests) {
        int m=requests.size();
        vector<int>vec(n,0);
        v=vec;
        int t=0;
        solve(0,0,t,n,requests);
        return t;
    }
};