class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size();
        int i,j,k,l,t=0;
        int sum=accumulate(rolls.begin(),rolls.end(),0);
        int rem=(m+n)*mean - sum;
        if(rem<n|| rem>6*n)return {};
        k=rem/n;
        l=rem%n;
        vector<int>ans(n,k);
        for(i=0;i<l;i++){
            ans[i]++;
        }
        return ans;
    }
};