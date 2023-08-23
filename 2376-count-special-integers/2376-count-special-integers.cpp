int dp[10][2][1024];
class Solution {
    int solve(string s,int pos,int tight,int mask){
        if(s.size()==pos){
            return mask!=0;
        }
        if(dp[pos][tight][mask]!=-1)return dp[pos][tight][mask];
        if(tight==1){
            int ans=0;
            for(int i=0;i<=s[pos]-'0';i++){
                if(mask&(1<<i))continue;
                int newmask=(mask==0&&i==0?mask:(mask|(1<<i)));
                if(i==s[pos]-'0'){
                    ans+=solve(s,pos+1,1,newmask);
                }
                else{
                    ans+=solve(s,pos+1,0,newmask);
                }
            }
            return dp[pos][tight][mask]=ans;
        }
        else{
            int ans=0;
            for(int i=0;i<=9;i++){
                if(mask&(1<<i))continue;
                int newmask=(mask==0&&i==0?mask:(mask|(1<<i)));
                ans+=solve(s,pos+1,0,newmask);
            }
            return dp[pos][tight][mask]=ans;
        }
    }
public:
    int countSpecialNumbers(int n) {
        string s=to_string(n);
        memset(dp,-1,sizeof(dp));
        return solve(s,0,1,0);
    }
};