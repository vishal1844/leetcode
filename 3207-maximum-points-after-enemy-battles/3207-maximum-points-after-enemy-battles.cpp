class Solution {
public:
    long long maximumPoints(vector<int>& en, int ce) {
        long long i,j,k,l,m,t=0;
        sort(en.begin(),en.end());
        i=0;
        j=en.size()-1;
        while(j>=0){
            if(ce>=en[i]){
                k=ce/en[i];
                t+=k;
                ce=ce%en[i];

            }
            else{
                if(t==0)break;
                ce+=en[j];
                j--;
            }
        }
        return t;
    }
};