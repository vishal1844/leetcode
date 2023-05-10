class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>v(n,vector<int>(n,0));
        int i,j,t=1,top=0,left=0,right=n-1,bottom=n-1;
        while(top<=bottom&&left<=right){
            for(i=left;i<=right&&top<=bottom;i++){
                v[top][i]=t;
                t++;
            }
            top++;
            for(i=top;i<=bottom&&left<=right;i++){
                v[i][right]=t;
                t++;
            }
            right--;
            for(i=right;i>=left&&top<=bottom;i--){
                v[bottom][i]=t;
                t++;
            }
            bottom--;
            for(i=bottom;i>=top&&left<=right;i--){
                v[i][left]=t;
                t++;
            }
            left++;
        }
        return v;
    }
};