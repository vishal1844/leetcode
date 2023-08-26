class Solution {
    static bool cmp(vector<int>&a,vector<int>&b){
        if(a[1]<b[1])return 1;
        if(a[1]==b[1]){
            if(a[0]>b[0])return 1;
            return 0;
        }
        return 0;
    }
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),cmp);
        int t=1,k=1,j=0;
        k=pairs[0][1];
        j=pairs[0][0];
        for(int i=0;i<pairs.size()-1;i++){
            if(k<pairs[i+1][0]){
                //cout<<pairs[i][1]<<" "<<pairs[i+1][0];
                k=pairs[i+1][1];
                t++;
            }
        }
        return t;
        
    }
};