class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int i,j,k,l,m,t=0;
        vector<pair<int,int>>mp;
        for(i=0;i<nums.size();i++){
            string s=to_string(nums[i]);
            string str;
            for(j=0;j<s.size();j++){
                str+=to_string(mapping[s[j]-'0']);
            }
            k=stoi(str);
            mp.push_back({k,i});
        }
        sort(mp.begin(),mp.end());
        vector<int>ans;
        for(auto itr:mp){
            ans.push_back(nums[itr.second]);
        }
        return ans;
        
    }
};