class Solution {
public:
    double champagneTower(int pour, int row, int col) {
        double a[101][101]={0.0};
        a[0][0]=pour;
        for(int i=0;i<100;i++){
            for(int j=0;j<=i;j++){
                if(a[i][j]>1){
                    a[i+1][j]+=(double)(a[i][j]-1.0)/2.0;
                    a[i+1][j+1]+=(a[i][j]-1.0)/2.0;
                    a[i][j]=1.0;
                }
            }
        }
        return a[row][col];
    }
};