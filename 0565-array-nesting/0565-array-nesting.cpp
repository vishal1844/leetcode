class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int i,j,k,l,m,t=0,maxi=0;
        int n=nums.size();
        vector<int>v(n);
        for(i=0;i<n;i++){
            j=i;
            t=0;
            while(!v[j]){
                t++;
                v[j]=1;
                j=nums[j];
            }
            maxi=max(maxi,t);
        }
        return maxi;
    }
};