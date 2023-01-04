class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mp;
        int i,j,k,l,m,t=0;
        for(i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        for(auto itr:mp){
            if(itr.second<2){
                return -1;
            }
            k=itr.second%3;
            m=itr.second/3;
            if(k==0){
                t+=m;
            }
            else{
                t+=m;
                t++;
            }
        }
        return t;
    }
};