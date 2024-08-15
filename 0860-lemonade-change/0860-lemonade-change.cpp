class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int i,j,k,l=0,t=0;
        for(auto itr:bills){
            if(itr==5){
                t++;
                continue;
            }
            else if(itr==10){
                if(t){
                    t--;
                    l++;
                }
                else return 0;
            }
            else{
                if(l){
                    l--;
                    if(t){
                        t--;
                    }
                    else return 0;
                    
                }
                else{
                    if(t>=3){
                        t-=3;
                    }
                    else return 0;
                }
            }
        }
        return 1;
    }
};