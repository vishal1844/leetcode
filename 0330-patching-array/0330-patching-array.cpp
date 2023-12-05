class Solution {
public:
    int minPatches(vector<int>& c, int t) {
        sort(c.begin(),c.end());
        long long int i,j,k,l,m=0;
        k=0;
        l=0;
        i=0;
        while(k<t){
            if(i<c.size()&&c[i]<=k+1){
                k+=c[i];
                i++;
            }
            else{
                l++;
                k=2*k+1;
            }
        }
        return l;
    }
};