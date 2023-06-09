class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        if(arr.size()%2==1)return 0;
        map<int,int>mp;
        int i,j;
        for(i=0;i<arr.size();i++){
            int t=(arr[i]%k+k)%k;
            mp[t]++;
        }
        for(auto itr:mp){
            if(itr.first==0){
                if(itr.second%2!=0)return 0;
            }
            else{
                if(mp[itr.first]!=mp[k-itr.first])return 0;
            }
        }
        return 1;
    }
};