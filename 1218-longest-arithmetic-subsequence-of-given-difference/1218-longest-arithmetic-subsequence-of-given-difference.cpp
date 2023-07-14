class Solution {
public:
    int longestSubsequence(vector<int>& arr, int diff) {
        int i,j,k,l,m,t=1;
        unordered_map<int,int>mp;
        for(i=0;i<arr.size();i++){
            if(mp.find(arr[i]-diff)!=mp.end()){
                mp[arr[i]]=1+mp[arr[i]-diff];
                t=max(t,mp[arr[i]]);
            }
            else{
                mp[arr[i]]=1;
            }
        }
        return t;
    }
};