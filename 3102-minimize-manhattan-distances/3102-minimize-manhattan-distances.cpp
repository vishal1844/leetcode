class Solution {
public:
    int minimumDistance(vector<vector<int>>& points) {
        multiset<int>sum,diff;
        int i,j,k,l,m,t=INT_MAX;
        for(auto itr:points){
            sum.insert(itr[0]+itr[1]);
            diff.insert((itr[0]-itr[1]));
        }
        for(auto itr:points){
            k=itr[0]+itr[1];
            l=(itr[0]-itr[1]);
            sum.erase(sum.find(k));
            diff.erase(diff.find(l));
            t=min(t,max(*sum.rbegin()-*sum.begin(),*diff.rbegin()-*diff.begin()));
            sum.insert(k);
            diff.insert(l);
        }
        return t;
    }
};