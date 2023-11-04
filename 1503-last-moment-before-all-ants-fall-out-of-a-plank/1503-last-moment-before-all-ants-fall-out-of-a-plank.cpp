class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int t=0;
        for(auto itr:left){
            t=max(t,itr);
        }
        for(auto itr:right){
            t=max(t,n-itr);
        }
        return t;
    }
};