class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
        long long i,j,k,l,m,t=0;
        for(i=0;i<target.size();i++){
            nums[i]=target[i]-nums[i];
        }
        int up=0;
        int down=0;
        for(i=0;i<nums.size();i++){
            if(nums[i]>0){
                if(nums[i]>=up){
                t+=(nums[i]-up);
                }
                up=nums[i];
                down=0;
            }
            else{
                if(nums[i]<0){
                    if(down<=abs(nums[i])){
                        t+=(abs(nums[i])-down);
                    }
                   down=abs(nums[i]);
                    up=0;
                    }
                else if(nums[i]==0){
                    up=0;
                    down=0;
                }
        }
        }
        return t;
    }
};