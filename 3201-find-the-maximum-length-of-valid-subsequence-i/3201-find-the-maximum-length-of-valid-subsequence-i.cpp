class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int i,j,k=0,l=0,t=0;
        for(auto itr:nums){
            if(itr%2)l++;
            else t++;
        }
        t=max(t,l);
        k=0;
        l=1;
        for(auto itr:nums){
            if(itr%2==1&&l==1){
                l=0;
                k++;
            }
            else if(itr%2==0&&l==0){
                l=1;
                k++;
            }
        }
        t=max(t,k);
        k=0;
        l=0;
        for(auto itr:nums){
            if(itr%2==0&&l==0){
                l=1;
                k++;
            }
            else if(itr%2==1&&l==1){
                l=0;
                k++;
            }
        }
        t=max(t,k);
        return t;
         
    }
};