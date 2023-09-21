class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(auto itr:nums2){
            nums1.push_back(itr);
        }
        sort(nums1.begin(),nums1.end());
        double i,j,k,l,m,t=0;
        int n=nums1.size();
        if(nums1.size()%2==0){
            i=(nums1[n/2]+nums1[n/2-1])/2.0;
            return i;
        }
        i=nums1[n/2];
        return i;
    }
};