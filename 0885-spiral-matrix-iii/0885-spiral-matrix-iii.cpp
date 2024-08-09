class Solution {
    int a[4]={0,1,0,-1};
    int b[4]={1,0,-1,0};
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rs, int cs) {
        vector<vector<int>>ans;
        ans.push_back({rs,cs});
        int steps=0;
        int dir=0;
        while(ans.size()<(rows*cols)){
            if(dir==0||dir==2){
                steps++;
            }
            for(int i=0;i<steps;i++){
                rs+=a[dir];
                cs+=b[dir];
                if(rs>=0&&rs<rows&&cs>=0&&cs<cols){
                    ans.push_back({rs,cs});
                }
            }
            dir=(dir+1)%4;
        }
        return ans;
    }
};