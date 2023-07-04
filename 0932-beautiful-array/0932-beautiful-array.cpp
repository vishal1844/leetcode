class Solution {
public:
    vector<int> beautifulArray(int n) {
       vector<int>res={1};
        while(res.size()<n){
            vector<int>v;
            for(auto itr:res){
                if(itr*2-1<=n){
                    v.push_back(itr*2-1);
                }
            }
            for(auto itr:res){
                if(itr*2<=n){
                    v.push_back(itr*2);
                }
            }
            res=v;
        }
        return res;
        
    }
};