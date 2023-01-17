class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int count=0,t=0,j,k,l,i;
        for(i=0;i<s.size();i++){
            if(s[i]=='0'){
                count++;
            }
            else{
                t++;
            }
            count=min(count,t);
        }
        return count;
    }
};