class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int i,j,l,m,t,s;
        priority_queue<int>pq;
        for(i=0;i<matrix.size();i++){
            for(j=0;j<matrix[0].size();j++){
                pq.push(matrix[i][j]);
                if(pq.size()>k){
                    pq.pop();
                }
            }
        }
        return pq.top();
        // m=matrix.size();
        // int n=matrix[0].size();
        // t=(m*n)-k;
        // while(t--){
        //     pq.pop();
        // }
        // return pq.top();
        
    }
};