class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& q) {
        vector<bool>v;
        int i,j,k,l,m,t=0;
        int n=nums.size();
        vector<int>pre(n,0);
        pre[0]=0;
        for(i=1;i<n;i++){
            if((nums[i]%2==0&&nums[i-1]%2==1)||(nums[i]%2==1&&nums[i-1]%2==0)){
                pre[i]=pre[i-1];
            }
            else{
                pre[i]=pre[i-1]+1;
            }
        }
        for(auto itr:q){
            k=itr[0];
            l=itr[1];
            t=pre[l]-pre[k];
            if(t)v.push_back(0);
            else{
                v.push_back(1);
            }
        }
        return v;
        
    }
};