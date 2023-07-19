class Solution {
    private:
    static bool cmp(vector<int>&a,vector<int>&b){
        if(a[1]==b[1]){
            return a[0]<b[0];
        }
        return a[1]<b[1];
    }
public:
    int eraseOverlapIntervals(vector<vector<int>>& inter) {
        sort(inter.begin(),inter.end(),cmp);
        int i,j,k,l,m,t=0;
        k=inter[0][1];
        for(i=1;i<inter.size();i++){
            if(k>inter[i][0]){
                t++;
            }
            else{
                k=inter[i][1];
            }
        }
        return t;
        
        
    }
};