class Solution {
public:
    int trap(vector<int>& h) {
        int i,j,k,l,m,t=0;
        int n=h.size();
        vector<int>p(n,0),s(n,0);
        for(i=0;i<n;i++){
            t=max(t,h[i]);
            p[i]=t;
        }
        t=0;
        for(i=n-1;i>=0;i--){
            t=max(t,h[i]);
            s[i]=t;
        }
        l=0;
        t=0;
        for(i=0;i<n;i++){
            t+=min(p[i],s[i])-h[i];
        }
        return t;
        
    }
};