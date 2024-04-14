
class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int i,j,k,l=-1,m,t=0;
        for(j=0;j<nums.size();j++){
            k=0;
        for(i=2;i*i<=nums[j];i++){
            if(nums[j]%i==0){
                k=1;
                break;
            }
        }
            if(k==0&&nums[j]>=2){
                //cout<<<<" ";
                if(l==-1){
                    l=j;
                }
                t=max(t,abs(l-j));
            }
    }
        return t;
    }
};