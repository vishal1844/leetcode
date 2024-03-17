class Solution {
public:
    int minimumDeletions(string word, int k) {
        int i,j,l,m,t=INT_MAX;
        vector<int>v(26,0);
        for(auto itr:word){
            v[itr-'a']++;
        }
        sort(v.begin(),v.end());
        m=0;
        l=0;
        int p=25;
        for(i=0;i<26;i++){
            m=l;
            for(j=25;j>i;j--){
                if(v[j]==0)continue;
                if((v[j]-v[i])>k){
                    m+=v[j]-v[i]-k;
                }
                else break;
            }
            t=min(t,m);
            l+=v[i];
        }
        return t;
    }
};