class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i,j,k,l,m=0;
        j=0;
        for(i=0;i<t.size();i++){
            if(s[j]==t[i]){
                j++;
            }
        }
        if(j==s.size()){
            return true;
        }
        return false;
            
        
    }
};