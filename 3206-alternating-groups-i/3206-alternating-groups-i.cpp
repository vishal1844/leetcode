class Solution {
public:
    int numberOfAlternatingGroups(vector<int>&v) {
        v.push_back(v[0]);
        v.push_back(v[1]);
        int i,j,k,l,m,t=0;
        for(i=0;i<v.size()-2;i++){
            if(v[i]!=v[i+1]&& v[i+1]!=v[i+2]){
                t++;
            }
        }
        return t;
    }
};