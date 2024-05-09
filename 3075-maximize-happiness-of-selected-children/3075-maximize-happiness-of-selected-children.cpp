class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        sort(h.rbegin(),h.rend());
        long long i,j,l,m,t=0;
        j=0;
        for(i=0;i<h.size();i++){
            if((h[i]-j)<0)continue;
            else{
                t+=h[i]-j;
                k--;
                if(k==0)return t;
            }
            j++;
        }
        return t;
    }
};