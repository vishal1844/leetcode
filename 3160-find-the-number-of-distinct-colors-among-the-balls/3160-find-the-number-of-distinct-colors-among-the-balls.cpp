class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        map<int,int>mp,mps;
        vector<int>ans;
        for(auto itr:queries){
            int k=itr[0];
            int l=itr[1];
            if(k<=limit){
                if(mp.find(k)!=mp.end()){
                    mps[mp[k]]--;
                    if(mps[mp[k]]==0){
                        mps.erase(mp[k]);
                    }
                }
                mp[k]=l;
                mps[l]++;
            }
            ans.push_back(mps.size());
        }
        return ans;
    }
};