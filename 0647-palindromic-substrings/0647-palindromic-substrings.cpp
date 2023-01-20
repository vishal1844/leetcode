class Solution {
public:
    int countSubstrings(string s) {
        int ans=0,i,j,k,l,t=0;
        int n=s.size();
        for(i=0;i<n;i++){
            ans++;
            k=i-1;
            l=i+1;
            while(k>=0&&l<n){
                if(s[k--]==s[l++]){
                    ans++;
                }
                else
                    break;
            }
            k=i;
            l=i+1;
            while(k>=0&&l<n){
                if(s[k--]==s[l++]){
                    ans++;
                }
                else
                    break;
            }
        }
        return ans;
    }
};