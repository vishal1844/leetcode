class Solution {
public:
    int strStr(string haystack, string needle) {
        int i,j,k,l,m,t=0;
        for(i=0;i<haystack.size();i++){
            if(haystack[i]==needle[0]){
                j=i;
                k=0;
                while(haystack[j]==needle[k]&&k<needle.size()&&j<haystack.size()){
                    j++;
                    k++;
                }
                if(k==needle.size()){
                    return i;
                }
            }
        }
        return -1;        
    }
};