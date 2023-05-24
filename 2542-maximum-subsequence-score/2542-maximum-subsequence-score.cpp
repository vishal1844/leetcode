class cmp{
    public:
    bool operator()(pair<int,int>a,pair<int,int>b){
        if(a.first==b.first){
            return a.second>b.second;
        }
        return a.first>b.first;
    }
};
class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        long long int i,j,l,m,t=0,s,maxi=INT_MIN,mini=INT_MAX;
        vector<pair<int,int>>v;
        for(i=0;i<nums1.size();i++){
            v.push_back({nums2[i],nums1[i]});
        }
        sort(v.rbegin(),v.rend());
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto itr:v){
            t+=itr.second;
            pq.push(itr.second);
            if(pq.size()==k){
                maxi=max(maxi,itr.first*t);
            }
            if(pq.size()>k){
                t-=pq.top();
                pq.pop();
                maxi=max(maxi,itr.first*t);
            }
        }
        return maxi;
    }
};