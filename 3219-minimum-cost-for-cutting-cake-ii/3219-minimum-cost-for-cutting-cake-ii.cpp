class Solution {
public:
    long long minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
       long long t=0;
        int sumh=accumulate(horizontalCut.begin(),horizontalCut.end(),0);
        int sumv=accumulate(verticalCut.begin(),verticalCut.end(),0);
        sort(horizontalCut.begin(),horizontalCut.end());
        sort(verticalCut.begin(),verticalCut.end());
        int i=horizontalCut.size()-1;
        int j=verticalCut.size()-1;
        while(i>=0&&j>=0){
            if(horizontalCut[i]>verticalCut[j]){
                t+=horizontalCut[i]+sumv;
                sumh-=horizontalCut[i];
                i--;
            }
            else{
                t+=verticalCut[j]+sumh;
                sumv-=verticalCut[j];
                j--;
            }
        }
        return t+sumh+sumv;
    }
};