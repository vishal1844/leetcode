class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int i,j,l,t=0;
        map<int,int>mp;
        for(auto itr:arr){
            mp[itr]++;
        }
        vector<int>v;
        for(auto itr:mp){
            v.push_back(itr.second);
        }
        sort(v.begin(),v.end());
        for(auto itr:v){
            if(itr<=k){
                k-=itr;
                t++;
            }
            else return v.size()-t;
        }
        return v.size()-t;
    }
};