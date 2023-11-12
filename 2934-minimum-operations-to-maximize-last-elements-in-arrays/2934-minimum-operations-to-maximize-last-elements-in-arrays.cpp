class Solution {
public:
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
        int i,j,k=0,l=0,m,t=0;
        for(auto itr:nums1){
            k=max(k,itr);
        }
        for(auto itr:nums2){
            l=max(l,itr);
        }
        int n=nums1.size();
        if(k==nums1[n-1]&&l==nums2[n-1])return 0;
         k=nums1[n-1];
        l=nums2[n-1];
        m=0;
        for(i=n-2;i>=0;i--){
            if(nums1[i]<=k&&nums2[i]<=l)continue;
            if(nums1[i]>k){
                if(nums2[i]>k||nums1[i]>l){
                    m=1e9;
                    break;
                }
                m++;
            }
            else{
                if(nums1[i]>l||nums2[i]>k){
                    m=1e9;
                    break;
                }
                m++;
            }
        }
         k=nums2[n-1];
        l=nums1[n-1];
        t=1;
        for(i=n-2;i>=0;i--){
            if(nums1[i]<=k&&nums2[i]<=l)continue;
            if(nums1[i]>k){
                if(nums2[i]>k||nums1[i]>l)return -1;
                
                t++;
            }
            else{
                if(nums1[i]>l||nums2[i]>k)return -1;
                t++;
            }
        }
        // k=nums1[n-1];
        // l=nums2[n-1];
        // m=0;
        // for(i=n-2;i>=0;i--){
        //     if(nums1[i]<=k&&nums2[i]<=l)continue;
        //     if(nums1[i]>k){
        //         if(nums2[i]>k)return -1;
        //         m++;
        //     }
        //     else{
        //         if(nums1[i]>l)return -1;
        //         m++;
        //     }
        // }
        cout<<m<<t<<endl;
        return min(m,t);
    }
};