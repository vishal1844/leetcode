//int dp[100001];
class Solution {
    // unordered_map<string,int>mp;
    // int solve(int i,int n,vector<int>&h,int b,int l,int prev){
    //     if(i>=n)return 0;
    //     if(prev<h[i]){
    //         if(l==0&&(h[i]-prev)>b){
    //             return 0;
    //         }
    //     }
    //     string s=to_string(i)+"|"+to_string(b)+"|"+to_string(l);
    //     if(mp.find(s)!=mp.end()){ return mp[s];}
    //     if(prev>=h[i]){
    //         return mp[s]=1+solve(i+1,n,h,b,l,h[i]);
    //     }
    //     int t=0;
    //     if(l!=0){
    //         t=1+solve(i+1,n,h,b,l-1,h[i]);
    //     }
    //     if(b>=(h[i]-prev)){
    //         t=max(t, 1+solve(i+1,n,h,b-(h[i]-prev),l,h[i]));
    //     }
    //     return mp[s]=t;
    // }
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        //memset(dp,-1,sizeof(dp));
        //return solve(1,h.size(),h,b,l,h[0]);
        priority_queue<int,vector<int>,greater<int>>pq;
        int i,j,k,t=0;
        for(i=1;i<h.size();i++){
            k=h[i]-h[i-1];
            if(k>0){
                pq.push(k);
            }
            if(pq.size()>l){
                if(b>=pq.top()){
                    b-=pq.top();
                    pq.pop();
                }
                else{
                    return i-1;
                }
            }
        }
        return i-1;
        
        
    }
};