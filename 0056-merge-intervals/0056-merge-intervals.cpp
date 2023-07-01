class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        vector<vector<int>>ans;
        int i,j,k,l,m=-1,t=0;
        vector<int>vec;
        for(auto itr:v){
            int k=itr[0];
            int l=itr[1];
            if(m==-1){
                m=k;
                t=l;
                continue;
            }
            if(t>=k){
                t=max(l,t);
            }
            else{
                vec.push_back(m);
                vec.push_back(t);
                ans.push_back(vec);
                vec.clear();
                m=k;
                t=l;
            }
        }
        vec.push_back(m);
        vec.push_back(t);
        ans.push_back(vec);
        return ans;
        
    }
};