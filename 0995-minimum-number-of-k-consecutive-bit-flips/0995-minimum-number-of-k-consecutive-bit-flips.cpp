class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int i,j,l,m=0,t=0;
        int n=nums.size();
        vector<int>v(n+1,0);
        for(i=0;i<=n-k;i++){
             t+=v[i];
            if(nums[i]==1&&t%2==0){
                continue;
            }
            if(nums[i]==0&&t%2==1){
                continue;
            }
            else{
                t++;
                m++;
                v[i+k]--;
            }
            //t+=v[i];
        }
        while(i<n){
            t+=v[i];
            if(nums[i]==1&&t%2==0){
               // t+=v[i];
                i++;
                continue;
            }
            else if(nums[i]==0&&t%2==1){
                //t+=v[i];
                i++;
                continue;
            }
            else return -1;
            //t+=v[i];
            i++;
        }
        return m;
        
        
    }
};