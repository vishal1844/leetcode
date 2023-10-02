class Solution {
public:
    bool winnerOfGame(string colors) {
        int i,j,k,l,m=0,t=0;
        int n=colors.size();
        for(i=1;i<n-1;i++){
            if(colors[i]==colors[i+1]&&colors[i-1]==colors[i]){
                if(colors[i]=='A'){
                    m++;
                }
                else{
                    t++;
                }
            }
        }
        if(m>t)return 1;
        return 0;
    }
};