class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int i,j,k=0,l,m=0;
        j=0;
        for(i=0;i<s.size();i++){
            k+=abs(s[i]-t[i]);
            if(k>maxCost){
                k-=abs(s[j]-t[j]);
                j++;
            }
            m=max(m,i-j+1);
        }
        return m;
    }
};