class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int i,j,l,m,t=0;
        vector<pair<int,pair<int,int>>>mp;
        for(i=0;i<points.size();i++){
            j=points[i][0]*points[i][0];
            l=points[i][1]*points[i][1];
            m=abs(j+l);
            //double r=sqrt(j+l);
            //cout<<r<<" ";
            mp.push_back({m,{points[i][0],points[i][1]}});
        }
        sort(mp.begin(),mp.end());
        vector<vector<int>>v;
        for(auto itr:mp){
            if(k!=0){
                v.push_back({itr.second.first,itr.second.second});
                k--;
            }
        }
        return v;
    }
};