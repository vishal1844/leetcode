 int dp[25][2][450];
const int mod=1e9+7;
class Solution {
     long long solve(string&s, int pos, int tight,long long sum,int k,int l){
        if(pos==s.size()){
            if(k<=sum&&sum<=l){
                return 1;
            }
            return 0;
        }
        if(dp[pos][tight][sum]!=-1){
            return dp[pos][tight][sum];
        }
         //int limit=tight?s[pos]-'0':9;
        long long ans=0;
         if(tight==1){
             int limit=s[pos]-'0';
        for(int i=0;i<=limit;i++){
           // if(sum+i>l)break;
            if(i==limit){
                ans=(ans%mod+solve(s,pos+1,1,sum+i,k,l)%mod)%mod;
                ans%=mod;
            }
            else{
                ans=(ans%mod+solve(s,pos+1,0,sum+i,k,l)%mod)%mod;
                ans%=mod;
            }
        }
        return dp[pos][tight][sum]=ans%mod;
         }
         else{
             for(int i=0;i<=9;i++){
                 ans=(ans%mod+solve(s,pos+1,0,sum+i,k,l)%mod)%mod;
                ans%=mod;
             }
             return dp[pos][tight][sum]=ans%mod;
         }
    }
    
public:
    int count(string s1, string s2, int min_sum, int max_sum) {
        memset(dp,-1,sizeof(dp));
        int t=0;
        int i=s1.size()-1;
        while(i>=0){
            if(s1[i]!='0'){
                t=s1[i]-'0'-1;
                s1[i]=t+'0';
                break;
            }
            else{
                s1[i]='9';
            }
            i--;
        }
        //cout<<s1<<" ";
        long long l=solve(s1,0,1,0,min_sum,max_sum);
        l%=mod;
        memset(dp,-1,sizeof(dp));
        long long r=solve(s2,0,1,0,min_sum,max_sum);
        r%=mod;
        return (r-l+mod)%mod;
    }
};