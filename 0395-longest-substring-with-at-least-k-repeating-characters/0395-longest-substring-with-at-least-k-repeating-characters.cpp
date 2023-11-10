class Solution {
    int solve(int l,int r,string s,int k){
        if(r-l<k)return 0;
        vector<int>v(26,0);
        for(int i=l;i<r;i++){
            v[s[i]-'a']++;
        }
        for(int i=l;i<r;i++){
            if(v[s[i]-'a']<k){
                int j=i;
                //cout<<s[i]<<" ";
                while(i<r&&v[s[i]-'a']<k)i++;
                 return max(solve(l,j,s,k),solve(i,r,s,k));
                //return 0;
            }
        }
        return r-l;
    }
public:
    int longestSubstring(string s, int k) {
        return solve(0,s.size(),s,k);
    }
};