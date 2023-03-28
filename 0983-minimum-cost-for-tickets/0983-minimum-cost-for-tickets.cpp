class Solution {
    int dp[366][366];
    int solve(int index,int d,vector<int>&days,vector<int>&costs,int n){
        if(index>=n){
            return 0;
        } 
        int one=0;
        int seven=0;
        int thirty=0;
        if(d<=365 && dp[index][d]!=-1){
            return dp[index][d];
        }
        if(d>days[index]){
            return solve(index+1,d,days,costs,n);
        }
        else{
            one=costs[0]+solve(index+1,days[index]+1,days,costs,n);
             seven=costs[1]+solve(index+1,days[index]+7,days,costs,n);
            thirty=costs[2]+solve(index+1,days[index]+30,days,costs,n);
            
        }
       return dp[index][d]=min(one,min(seven,thirty));
    }
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        memset(dp,-1,sizeof(dp));
        return solve(0,0,days,costs,days.size());
    }
};