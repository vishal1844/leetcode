class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        int i,k,l,m=0,t=0,j=0;
        unordered_map<int,int>mp;
        vector<int>vec=queries;
        sort(queries.begin(),queries.end());
        for(i=0;i<queries.size();i++){
            while(t<queries[i]&&j<nums.size()){
                t+=nums[j];
                j++;
                m++;
            }
            if(t<=queries[i]){
                mp[queries[i]]=m;
            }
            else{
                mp[queries[i]]=m-1;
            }
        }
        for(i=0;i<vec.size();i++){
            v.push_back(mp[vec[i]]);
        }
        return v;
    }
};