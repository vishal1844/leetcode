class Solution {
public:
    int isit(int i,string&st,unordered_map<string,int>&mp,int n,vector<int>&dp){
        if(i==n)
            return 1;
        if(dp[i]!=-1)
            return dp[i];
        string temp="";
        int j=i;
        for(j;j<n;j++){
            temp+=st[j];
            if(mp.count(temp)){
                if(isit(j+1,st,mp,n,dp))
                    return dp[i]=1;
            }
        }
        return dp[i]=0;
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        unordered_map<string,int>mp;
        vector<string>ans;
        vector<pair<int,string>>vec;
        for(auto it:words)
        {
            vec.push_back({it.size(),it});
        }
        sort(vec.begin(),vec.end());
        for(auto it:vec){
            vector<int>dp(it.second.size(),-1);
            if(isit(0,it.second,mp,it.second.size(),dp)){
                ans.push_back(it.second);
            }
                
            mp[it.second]++;
        }
        return ans;
    }
};