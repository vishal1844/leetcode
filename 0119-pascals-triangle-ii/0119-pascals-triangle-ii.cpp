class Solution {
public:
    vector<int> getRow(int r) {
        vector<int>v;
        int i,j,k,m,l,t=0;
        if(r==0)return{1};
        v.push_back(1);
        for(i=1;i<=r;i++){
            vector<int>vec(i+1);
            vec[0]=1;
            vec[i]=1;
            for(j=1;j<v.size();j++){
                vec[j]=v[j-1]+v[j];
            }
            v=vec;
        }
        return v;
    }
};