class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i,j,k,l,t,s;
        i=0;
        int n=matrix.size();
        int m=matrix[0].size();
        j=m-1;
        while(i<n&&j>=0){
            if(target==matrix[i][j])
                return true;
            else if(target<matrix[i][j])
                j--;
            else if(matrix[i][j]<target)
                i++;
        }
        return false;
        
    }
};