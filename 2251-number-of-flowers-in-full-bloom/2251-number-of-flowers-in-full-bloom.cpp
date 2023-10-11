class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int>s,e;
        for(auto itr:flowers){
            s.push_back(itr[0]);
            e.push_back(itr[1]+1);
        }
        sort(s.begin(),s.end());
        sort(e.begin(),e.end());
        vector<int>v;
        for(auto itr:people){
            int t=upper_bound(s.begin(),s.end(),itr)-s.begin();
            int k=upper_bound(e.begin(),e.end(),itr)-e.begin();
            v.push_back(t-k);
        }
        return v;
    }
};