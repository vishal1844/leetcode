class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int i,j,k,l,m,t=0;
       // if(s.size()%2==1)return 0;
        string str=s;
        for(i=0;i<s.size()-1;i++){
            char c=str[0];
            str.erase(0,1);
            str+=c;
            if(str==s){
                return 1;
            }
        }
        return 0;
        
    }
};