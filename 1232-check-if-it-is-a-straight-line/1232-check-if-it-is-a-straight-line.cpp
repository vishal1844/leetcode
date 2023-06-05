class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x1=coordinates[0][0];
        int x2=coordinates[1][0];
        int y1=coordinates[0][1];
        int y2=coordinates[1][1];
        for(int i=2;i<coordinates.size();i++){
            //(x-x1)/(y-y1)!=(x-x2)/(y-y2) formula
            int x=coordinates[i][0];
            int y=coordinates[i][1];
            if((x-x1)*(y-y2)!=((x-x2)*(y-y1))){
                return 0;
            }
        }
        return true;
    }
};