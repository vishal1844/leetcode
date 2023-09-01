class Solution {
    int solve(int n){
        if(n==0)return 0;
        if(n==1)return 1;
        if(n%2==1){
            return 1+solve(n/2);
        }
        return solve(n/2);
    }
public:
    vector<int> countBits(int n) {
        int i,j,k,l,t=0;
        vector<int>v;
        v.push_back(0);
        for(i=1;i<=n;i++){
            v.push_back(solve(i));
        }
        return v;
        
        
    }
};