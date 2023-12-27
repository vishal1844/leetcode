class Solution {
public:
    int minCost(string c, vector<int>& v) {
      int i,j,k,l,m,t=0;
        for(i=0;i<v.size();i++){
            if(i<v.size()-1&&c[i]!=c[i+1])continue;
            else{
                k=INT_MAX;
                char ch=c[i];
                t+=v[i];
                k=v[i];
                i++;
                while(i<v.size()&&c[i]==ch){
                    t+=v[i];
                    k=max(k,v[i]);
                    i++;
                }
                //cout<<t<<" ";
                t-=k;
                i--;
            }
        }
        return t;
    }
};