class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int i,j,k,l,m,t=0;
        for(i=0;i<customers.size();i++){
            if(grumpy[i]==0)t+=customers[i];
        }
        int maxi=0;
        j=0;
        for(i=0;i<minutes;i++){
            if(grumpy[i]==1){
                t+=customers[i];
            }
        }
        maxi=max(maxi,t);
        for(i=minutes;i<customers.size();i++){
            if(grumpy[j]==1){
                t-=customers[j];
            }
            if(grumpy[i]==1){
                t+=customers[i];
            }
            j++;
            maxi=max(maxi,t);
        }
        return maxi;
    }
};