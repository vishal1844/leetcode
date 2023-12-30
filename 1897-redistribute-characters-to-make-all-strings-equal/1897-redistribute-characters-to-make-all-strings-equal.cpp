class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector<int>v(26,0);
        int i,j,k,l,m,t=0;
        for(auto itr:words){
            for(auto it:itr){
                v[it-'a']++;
            }
        }
        for(auto itr:v){
            if(itr%words.size()!=0)return 0;
        }
        return 1;
    }
};