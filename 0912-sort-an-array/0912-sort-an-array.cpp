class Solution {
    void mergesort(int l,vector<int>&nums,vector<int>&v,int mid,int h){
        int i=l;
        int j=l;
        int k=mid+1; 
        while(i<=mid&&k<=h){
            if(nums[i]<nums[k]){
                //v.push_back(nums[i]);
                v[j++]=nums[i];
                i++;
            }
            else{
                //v.push_back(nums[k]);
                v[j++]=nums[k];
                k++;
            }
        }
        while(i<=mid){
            //v.push_back(nums[i]);
            v[j++]=nums[i];
            i++;
        }
        while(k<=h){
           // v.push_back(nums[k]);
            v[j++]=nums[k];
            k++;
        }
        // for(i=l;i<v.;i++){
            // cout<<v[i]<<" ";
        // }
        // cout<<endl;
        for(int i=l;i<=h;i++){
           nums[i]=v[i];
            }
        // return ;
    }
    void merge(int l,vector<int>&nums,vector<int>&v,int h){
        if(l<h){
            int mid=(l+h)/2;
            merge(l,nums,v,mid);
            merge(mid+1,nums,v,h);
            mergesort(l,nums,v,mid,h);
        }
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int>v(nums.size(),0);
        int h=nums.size()-1;
        merge(0,nums,v,h);
        return v;
    }
};