class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>>v(img.size(),vector<int>(img[0].size(),0));
        int i,j,k,l,m,t=0;
        for(i=0;i<img.size();i++){
            for(j=0;j<img[0].size();j++){
                int s=0;
                int c=0;
                for(k=i-1;k<=i+1;k++){
                    for(l=j-1;l<=j+1;l++){
                        if(k>=0&&k<img.size()&&l>=0&&l<img[0].size()){
                            c++;
                            s+=img[k][l];
                        }
                    }
                }
                v[i][j]=(s/c);
            }
        }
        return v;
    }
};