class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int n=points.size();
        int m=points[0].size();
        int i,j,k,l;
        vector<long long>prev(m,0);
        for(i=0;i<m;i++){
            prev[i]=points[0][i];
        }
        for(i=1;i<n;i++){
            vector<long long>left(m,0);
            vector<long long>right(m,0);
            left[0]=prev[0];
            for(j=1;j<m;j++){
                left[j]=max(prev[j],left[j-1]-1);
            }
            right[m-1]=prev[m-1];
            for(j=m-2;j>=0;j--){
                right[j]=max(prev[j],right[j+1]-1);
            }
            for(j=0;j<m;j++){
                prev[j]=max(left[j],right[j])+points[i][j];
                ///cout<<points[i][j]<<" ";
            }
            //cout<<endl;
        }
        return *max_element(prev.begin(),prev.end());
    }
};