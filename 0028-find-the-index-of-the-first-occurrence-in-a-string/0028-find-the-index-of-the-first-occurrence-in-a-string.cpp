class Solution {
public:
    int strStr(string haystack, string needle) {
        int i,j=0,k,l,m,t,s=0;
        int n=haystack.size();
        if(n<needle.size())return -1;
        for(i=0;i<=n-needle.size();i++){
            j=0;
            for(j=0;j<needle.size();j++){
                if(needle[j]!=haystack[i+j]){
                    break;
                }
            }
            if(j==needle.size()){
                return i;
            }
        }
        return -1;
        
    }
};