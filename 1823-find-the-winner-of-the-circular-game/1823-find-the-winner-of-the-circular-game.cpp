class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>v;
        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
        int i,j,l=0;
        while(v.size()>1){
            j=(l+k-1)%v.size();
            v.erase(v.begin()+j);
            l=j;
        }
        return v.front();
    }
};