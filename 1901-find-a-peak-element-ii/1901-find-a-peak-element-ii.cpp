class Solution {
    bool solve(int mid,int fcol,int lcol,vector<vector<int>>&mat){
        int maxirow=0;
        for(int i=0;i<mat.size();i++){
            if(mat[maxirow][mid]<mat[i][mid]){
                maxirow=i;
            }
        }
        if(mid+1<=lcol&&mat[maxirow][mid]>mat[maxirow][mid+1]){
            return 1;
        }
        return 0;
    }
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int fcol=0,lcol=mat[0].size()-1;
        while(fcol<lcol){
            int mid=fcol+(lcol-fcol)/2;
            if(solve(mid,fcol,lcol,mat))lcol=mid;
            else
                fcol=mid+1;
        }
        int maxirow=0;
        for(int i=0;i<mat.size();i++){
            if(mat[maxirow][fcol]<mat[i][fcol]){
                maxirow=i;
            }
        }
        vector<int>v{maxirow,fcol};
        return v;
    }
};