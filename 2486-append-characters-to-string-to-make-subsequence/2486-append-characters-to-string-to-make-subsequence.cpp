class Solution {
public:
    int appendCharacters(string s, string t) {
        int i,j,k=0,l;
        int n=s.size(),m=t.size();
        j=0;
        for(i=0;i<n;i++){
            if(t[j]==s[i]){
                k++;
                j++;
            }
        }
        return m-k;
    }
};