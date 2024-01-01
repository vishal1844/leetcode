class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i,j,k,l,m,t=0;
        j=0;
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        for(i=0;i<s.size();i++){
            if(s[i]<g[j])continue;
            if(s[i]>=g[j])t++;
            j++;
            if(j==g.size())break;
        }
        return t;
    }
};