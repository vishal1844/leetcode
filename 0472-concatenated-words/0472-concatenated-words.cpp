class Solution {
public:
    int isit(int i,string &st,unordered_map<string,int>&mp,int n,vector<int>&dp){
        if(i==n)
            return 1;
        if(mp.count(st))return 1;
        if(dp[i]!=-1)
            return dp[i];
        string temp="";
        int j;
        for(j=i;j<n;j++){
            temp+=st[j];
            string s=st.substr(j+1);
            if(mp.count(temp)){
                if(mp.count(s)||isit(j+1,st,mp,n,dp))
                    return dp[i]=1;
            }
        }
        return dp[i]=0;
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        unordered_map<string,int>mp;
        vector<string>ans;
        for(auto itr: words){
            mp[itr]++;
        }
        //vector<pair<int,string>>vec;
        // for(auto it:words)
        // {
        //     vec.push_back({it.size(),it});
        // }
        //sort(vec.begin(),vec.end());
        for(auto it:words){
            vector<int>dp(it.size(),-1);
            //string s=it;
            mp.erase(it);
            if(isit(0,it,mp,it.size(),dp)){
                ans.push_back(it);
            }
            mp[it]++;
                
            //mp[it.second]++;
        }
        return ans;
    }
};