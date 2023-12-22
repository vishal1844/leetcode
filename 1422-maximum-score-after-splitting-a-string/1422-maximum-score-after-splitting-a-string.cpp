class Solution {
public:
    int maxScore(string s) {
        int i,j,k,l,m=0,t=0;
        for(auto itr:s){
            if(itr=='0')m++;
            else{
                t++;
            }
        }
        k=0;
        j=0;
        l=0;
        for(i=0;i<s.size()-1;i++){
            if(s[i]=='0'){
                j++;
            }
            else{
                l++;
            }
            k=max(k,j+(t-l));
        }
        return k;
    }
};