class Solution {
public:
    int maxDistance(vector<vector<int>>& a) {
        int i,j,k;
      int maxi=0;
        k=a[0][0];
        int l=a[0].back();
        for(i=1;i<a.size();i++){
            maxi=max(abs(a[i][0]-l),maxi);
            maxi=max(maxi,abs(a[i].back()-k));
            k=min(k,a[i][0]);
            l=max(l,a[i].back());
        }
        return maxi;
    }
};