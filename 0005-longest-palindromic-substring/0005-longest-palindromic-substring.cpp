class Solution {
    int solve(string s,int l,int r){
        while(l>=0&&r<s.size()&&s[l]==s[r]){
            l--;
            r++;
        }
        return r-l-1;
    }
public:
    string longestPalindrome(string s) {
        int t=0,ans=0,j,k;
        for(int i=0;i<s.size();i++){
            j=solve(s,i,i);
            k=solve(s,i,i+1);
            j=max(j,k);
            if(ans<j){
                ans=j;
                t=i-(j-1)/2;
            }
        }
        return s.substr(t,ans);
    }
};