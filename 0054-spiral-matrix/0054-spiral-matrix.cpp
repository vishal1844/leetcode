class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int top=0;
        int bot=n-1;
        int left=0;
        int right=m-1;
        int i,j,k,l,t=0;
        vector<int>v;
        while(top<=bot&&left<=right){
            for(i=left;i<=right && top<=bot;i++){
                v.push_back(matrix[top][i]);
            }
            top++;
            for(i=top;i<=bot&&left<=right;i++){
                v.push_back(matrix[i][right]);
            }
            right--;
            for(i=right;i>=left&&top<=bot;i--){
                v.push_back(matrix[bot][i]);
            }
            bot--;
            for(i=bot;i>=top&&left<=right;i--){
                v.push_back(matrix[i][left]);
            }
            left++;
            //cout<<"IJ"<<" ";
        }
        return v;
    }
};