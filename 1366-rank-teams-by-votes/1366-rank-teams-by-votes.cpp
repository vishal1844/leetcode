class Solution {
public:
    string rankTeams(vector<string>& votes) {
        vector<vector<int>>v(26,vector<int>(27));
        for(char c:votes[0]){
            v[c-'A'][26]=c;
        }
        int i,j;
        for(i=0;i<votes.size();i++){
            for(j=0;j<votes[0].size();j++){
                v[votes[i][j]-'A'][j]--;
            }
        }
        sort(v.begin(),v.end());
        string s;
        for(i=0;i<votes[0].size();i++){
            s+=v[i][26];
        }
        return s;
    }
};