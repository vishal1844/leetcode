class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int i,j,l,m,t=0;
        vector<pair<int,double>>v;
        for(i=0;i<position.size();i++){
           v.push_back({position[i],((target-position[i])/(speed[i]*1.0))});
        }
        sort(v.rbegin(),v.rend());
        t=0;
        double k=0;
        for(auto itr:v){
            if(k<itr.second){
                k=itr.second;
                t++;
            }
        }
        return t;
        
        
    }
};