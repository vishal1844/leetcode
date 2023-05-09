class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>ans;
        int i,top=0,left=0,right=n-1,bottom=m-1;
        while(top<=bottom&&left<=right){
            for(i=left;i<=right&&top<=bottom;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(i=top;i<=bottom&&left<=right;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            for(i=right;i>=left&&top<=bottom;i--){
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
            for(i=bottom;i>=top&&left<=right;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        return ans;
    }
};