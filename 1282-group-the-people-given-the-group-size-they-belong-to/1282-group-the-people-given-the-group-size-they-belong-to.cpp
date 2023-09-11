class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& group) {
        int n=group.size();
        int i,j,k,l,m,t=0;
        vector<pair<int,int>>v;
        vector<vector<int>>ans;
        for(i=0;i<group.size();i++){
            v.push_back({group[i],i});
        }
        sort(v.begin(),v.end());
        t=0;
        k=0;
        vector<int>vec;
        for(i=0;i<n;i++){
            if(k==0){
                k+=v[i].first;
                t=v[i].first;
            }
            k--;
            if(t==v[i].first){
                vec.push_back(v[i].second);
            }
            if(vec.size()==t){
                ans.push_back(vec);
                vec.clear();
            }
        }
        return ans;
    }
};