class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<double>v;
        for(int i=0;i<dist.size();i++){
            double t=(dist[i]*1.0)/speed[i];
            v.push_back(t);
        }
        sort(v.begin(),v.end());
        int t=0,k=0;
        for(int i=0;i<v.size();i++){
            if(v[i]<=t)return k;
            k++;
            t++;
        }
        return k;
    }
};