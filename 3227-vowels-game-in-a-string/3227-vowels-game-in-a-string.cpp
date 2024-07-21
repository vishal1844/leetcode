class Solution {
public:
    bool doesAliceWin(string s) {
        int i,j,k,l,m,t=0;
        for(auto itr:s){
            if(itr=='a'||itr=='e'||itr=='i'||itr=='o'||itr=='u') t++;
        }
        if(t==0)return 0;
        return 1;
    }
};