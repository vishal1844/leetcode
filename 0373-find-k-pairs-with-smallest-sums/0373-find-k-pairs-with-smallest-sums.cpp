class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n=nums1.size();
        int m=nums2.size();
        int i,j,l,t=0;
        vector<vector<int>>v;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        for(i=0;i<nums2.size();i++){
            t=nums1[0]+nums2[i];
            //cout<<i<<" ";
            pq.push({t,{0,i}});
        }
        while(!pq.empty()&&v.size()!=k){
            auto itr=pq.top();
            pq.pop();
            i=itr.second.first;
            j=itr.second.second;
            //cout<<i<<" ";
            v.push_back({nums1[itr.second.first],nums2[itr.second.second]});
            if(i!=n-1){
                //cout<<i<<" ";
                t=nums1[i+1]+nums2[j];
                pq.push({t,{i+1,j}});
            }
        }
        return v;
    }
};