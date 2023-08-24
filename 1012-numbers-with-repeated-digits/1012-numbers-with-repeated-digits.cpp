class Solution {
    int dp[10][2][1024];
    int solve(string&s,int pos,int tight,int mask){
        if(pos==s.size()){
            if(mask!=0){
                //ut<<mask<<" ";
                return 1;
            }
            return 0;
        }
        if(dp[pos][tight][mask]!=-1)return dp[pos][tight][mask];
        int ans=0;
        if(tight==1){
            for(int i=0;i<=s[pos]-'0';i++){
               int newmask;
                if(mask&(1<<i))continue;
                if(mask==0&&i==0)newmask=0;
                //else if(mask==0)newmask=(1<<i);
                else{
                    newmask=(mask|(1<<i));
                }
               // int newmask=(mask==0&&i==0?0:(mask&(1<<i)));
                //if(mask==0&&i==0)newmask=0;;
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
            for(int i=0;i<=9;i++){
                //int newmask=(mask==0?(1<<i):(mask&(1<<i)));
                if(mask&(1<<i))continue;
                int newmask;
                if(mask==0&&i==0)newmask=0;
                else{
                    newmask=(mask|(1<<i));
                }
                ans+=solve(s,pos+1,0,newmask);
            }
            return dp[pos][tight][mask]=ans;
        }
    }
    
public:
    int numDupDigitsAtMostN(int n) {
        string s=to_string(n);
        memset(dp,-1,sizeof(dp));
        int r=solve(s,0,1,0);
        return n-r;
    }
};