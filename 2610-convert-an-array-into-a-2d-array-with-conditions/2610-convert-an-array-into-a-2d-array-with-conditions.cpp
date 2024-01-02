class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int i,j,k,l,m,t=0;
        vector<vector<int>>v;
        map<int,int>mp;
        vector<int>vec;
        for(i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        while(1){
            vector<int>r;
            for(auto itr:mp){
                cout<<itr.first<<" ";
                // if(mp[itr.first]==0){
                //     mp.erase(itr.first);
                //     continue;
                // }
                if(itr.second!=0){
                r.push_back(itr.first);
                mp[itr.first]--;
                }
                // else{
                //     t=1;
                //     break;
                // }
                // if(mp[itr.first]==0){
                //     mp.erase(itr.first);
                // }
            }
           // v.push_back(r);
            if(t==1){
                break;
            }
            if(r.size()==0){
                return v;
            }
            v.push_back(r);
            r.clear();
     }
        return v;
        
    }
};