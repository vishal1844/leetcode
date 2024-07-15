class Solution {
public:
    int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        int t=accumulate(horizontalCut.begin(),horizontalCut.end(),0LL)+accumulate(verticalCut.begin(),verticalCut.end(),0LL);
        for(auto itr:horizontalCut){
            for(auto it:verticalCut){
                t+=min(itr,it);
            }
        }
        return t;
    }
};