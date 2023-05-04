class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int>qr,qd;
        int i,j,k,l,m,t=0;
        for(i=0;i<senate.size();i++){
            if(senate[i]=='R')qr.push(i);
            else{
                qd.push(i);
            }
        }
        while(!qr.empty()&&!qd.empty()){
            i=qr.front();
            j=qd.front();
            qr.pop();
            qd.pop();
            (i<j)?qr.push(i+senate.size()):qd.push(j+senate.size());
        }
        if(qr.size()<qd.size())return "Dire";
        return "Radiant";
    }
};