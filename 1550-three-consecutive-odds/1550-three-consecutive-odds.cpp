class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int i,j,k,l,m,t=0;
        for(auto itr:arr){
            if(itr%2){
                t++;
                if(t==3)return 1;
            }
            else{
                t=0;
            }
        }
        return 0;
    }
};