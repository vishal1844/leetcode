class Solution {
    void merge(int left,int right,vector<int>&nums){
        int mid=left+(right-left)/2;
        int size1=mid-left+1;
        int size2=right-mid;
        int a1[size1];
        int a2[size2];
        int i;
        int j=0;
        for(i=left;i<=mid;i++)
            a1[j++]=nums[i];
        j=0;
        for(i=mid+1;i<=right;i++)
            a2[j++]=nums[i];
        int k=0;
        j=0;
        i=left;
        while(k<size1 && j<size2){
            if(a1[k]<a2[j]){
                nums[i]=a1[k];
                k++;
            }
            else{
                nums[i]=a2[j];
                j++;
            }
            i++;
        }
        while(k<size1)
            nums[i++]=a1[k++];
        while(j<size2)
            nums[i++]=a2[j++];
    }
    void mergesort(int left,int right,vector<int>&nums){
        if(left<right){
            int mid=left+(right-left)/2;
            mergesort(left,mid,nums);
            mergesort(mid+1,right,nums);
            merge(left,right,nums);
        }
    }
public:
    vector<int> sortArray(vector<int>& nums) {
    int left=0,right=nums.size()-1;
    mergesort(left,right,nums); 
    return nums;
    }
};