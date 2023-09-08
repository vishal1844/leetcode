class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>v,vec;
        int i,j,k,l,m,t=0;
        v.push_back(1);
        ans.push_back(v);
        numRows--;
        while(numRows--){
            vec.push_back(1);
            for(i=0;i<v.size()-1;i++){
                vec.push_back(v[i]+v[i+1]);
            }
            vec.push_back(1);
            ans.push_back(vec);
            v=vec;
            vec.clear();
        }
        return ans;
    }
};