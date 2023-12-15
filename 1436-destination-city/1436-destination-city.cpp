class Solution {
public:
    string destCity(vector<vector<string>>& p) {
        //vector<string>v;
        int i,j,k,l,m,t=0;
        map<string,string>mp;
        for(i=0;i<p.size();i++){
            mp[p[i][0]]=p[i][1];
        }
        string s=p[0][1];
        while(1){
            if(mp.find(s)==mp.end()){
                return s;
            }
            s=mp[s];
        }
        return s;
        
    }
};