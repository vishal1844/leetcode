class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& mf, vector<int>& mt) {
        map<int,int>st;
        int i,j,k,l,m,t=0;
        for(i=0;i<nums.size();i++){
            st[nums[i]]++;
        }
        for(i=0;i<mf.size();i++){
            k=st[mf[i]];
            st.erase(mf[i]);
            st[mt[i]]=k;
        }
        vector<int>v;
        for(auto itr:st){
                v.push_back(itr.first);
        }
        return v;
    }
};