class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int i,j,k,l=0,m,t=0;
        for(i=0;i<gain.size();i++){
            l+=gain[i];
            t=max(t,l);
        }
        return t;
    }
};