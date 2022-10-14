class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int i,j,k,l,t;
        vector<int>v;
       unordered_map<int,int>mp;
        for(i=0;i<n;i++){
            mp[nums1[i]]++;
            // for(j=0;j<m;j++){
            //     if(nums1[i]==nums2[j]){
            //         v.push_back(nums1[i]);
            //         break;
            //     }
            // }
        }
        for(j=0;j<m;j++){
            if(mp[nums2[j]]>0){
                //mp[nums2[j]]--;
                v.push_back(nums2[j]);
                //nums2.erase(nums2[j]);
                mp.erase(nums2[j]);
            }
        }
        // for(j=0;j<m;j++){
        //     mps[nums2[j]]++;
        //     i
        // }
        
        return v;
    }
};