class Solution {
public:
    bool detectCapitalUse(string word) {
        int i,j,k,l,m,t;
        if(word[0]>='a'&&word[0]<='z'){
            for(i=1;i<word.size();i++){
                if(!(word[i]>='a'&&word[i]<='z')){
                    return false;
                }
            }
            return true;
        }
        for(i=1;i<word.size();i++){
            if(word[i]>='a'&&word[i]<='z'){
                if(t==1){
                    return false;
                }
                t=0;
            }
           else if(word[i]>='A'&&word[i]<='Z'){
               if(t==0){
                   return false;
               }
               t=1;
           }
        }
        return true;
    }
};