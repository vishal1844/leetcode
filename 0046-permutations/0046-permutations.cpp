class Solution {
public:
    void permu(vector<int>&nums,int n,int freq[],vector<vector<int>>&v,vector<int>&ds){
        int i,j,k,l;
        if(n==ds.size()){
            v.push_back(ds);
            return ;
        }
        for(i=0;i<n;i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i]=1;
                permu(nums,n,freq,v,ds);
                freq[i]=0;
                ds.pop_back();
            }
        }
        //return v;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>v;
        //vector<vector<int>>vs;
        vector<int>ds;
        int n=nums.size();
        int freq[nums.size()];
        for(int i=0;i<n;i++)freq[i]=0;
        permu(nums,n,freq,v,ds);
        return v;
    }
};