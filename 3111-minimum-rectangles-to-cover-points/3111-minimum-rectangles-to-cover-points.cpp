class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
     int i,j,k,l,m,t=0;
        sort(points.begin(),points.end());
        k=points[0][0];
        l=points[0][1];
        for(i=1;i<points.size();i++){
            j=points[i][0];
            m=points[i][1];
            if(j-k<=w){
                l=max(l,m);
            }
            else{
                t++;
                k=points[i][0];
            }
        }
        return t+1;
    }
    
};