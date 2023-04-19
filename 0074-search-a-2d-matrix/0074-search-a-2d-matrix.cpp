class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i,j,k,l,m,t=0,h;
        l=0;
        h=matrix[0].size()-1;
        int n=matrix.size();
        m=matrix[0].size();
       //--;
        while(l<n&&h>=0){
            if(matrix[l][h]==target){
                return 1;
            }
            else if(matrix[l][h]>target){
                h--;
            }
            else{
                l++;
            }
        }
        return 0;
    }
};