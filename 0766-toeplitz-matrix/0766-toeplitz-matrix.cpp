class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int i,j,k,l,m,t=0,s;
        int n=matrix.size();
        m=matrix[0].size();
        //cout<<n<<m;
//         for(i=0;i<n;i++){
//             for(j=0;j<m;j++){
                
//                  if((i-1==-1)||(j-1==-1)){
//                     continue;
//                 }
//                 else if(matrix[i][j]==matrix[i-1][j-1]){
//                     continue;
//                 }
//                 else{
//                     t=1;
//                     break;
//                 }
//             }
//         }
//         if(t==0) return true;
//         else return false;
        for(i=1;i<n;i++){
            for(j=1;j<m;j++){
                if(matrix[i][j]!=matrix[i-1][j-1])
                    return false;
            }
        }
        return true;
    }
};