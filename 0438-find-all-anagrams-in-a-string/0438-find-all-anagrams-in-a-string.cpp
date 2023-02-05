class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int i,j,k,l,m,t=0;
        unordered_map<char,int>mp,mps;
        vector<int>v;
        if(s.size()<p.size()){
            return v;
        }
        for(i=0;i<p.size();i++){
            mps[p[i]]++;
        }
        for(i=0;i<s.size();i++){
            mp[s[i]]++;
            if(i>=p.size()){
                mp[s[i-p.size()]]--;
                if(mp[s[i-p.size()]]==0){
                    mp.erase(s[i-p.size()]);
                }
            }
            if(mps.size()==mp.size()&&mp==mps){
                v.push_back(i-p.size()+1);
            }
        }
        return v;
        
        
    }
};