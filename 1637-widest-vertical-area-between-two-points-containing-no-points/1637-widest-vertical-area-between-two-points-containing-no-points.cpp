class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int i,jk,t=0;
        for(i=0;i<points.size()-1;i++){
            t=max(t,(points[i+1][0]-points[i][0]));
        }
        return t;
    }
};