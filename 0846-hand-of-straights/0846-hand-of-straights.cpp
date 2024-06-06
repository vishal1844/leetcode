class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0){
            return 0;
        }
        int i,j,k,l,m,t=0;
        map<int,int>mp;
        for(auto itr:hand){
            mp[itr]++;
        }
        while(mp.size()!=0){
            t=0;
            k=0;
            for(auto itr:mp){
                if(t==0){
                    k=itr.first;
                    mp[itr.first]--;
                    if(mp[itr.first]==0){
                        mp.erase(itr.first);
                    }
                    t++;
                    if(t==groupSize)break;
                    continue;
                }
                else if(itr.first-k==1){
                    k=itr.first;
                    mp[itr.first]--;
                    if(mp[itr.first]==0){
                        mp.erase(itr.first);
                    }
                    t++;
                }
                else{
                    break;
                }
                if(t==groupSize)break;
            }
            if(t!=groupSize)return 0;
        }
        return 1;
    }
};