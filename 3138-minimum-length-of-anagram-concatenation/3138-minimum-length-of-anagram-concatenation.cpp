class Solution {
public:
    int minAnagramLength(string s) {
        int i,j,k,l,m,t=0;
        int n=s.size();
        vector<int>v(26,0);
        vector<char>st(n+1);
        for(i=0;i<n;i++){
            st[i+1]=s[i];
        }
        for(i=1;i<n+1;i++){
            v[st[i]-'a']++;
            if(n%i==0){
                t=0;
                for(j=i+1;j<n+1;j+=i){
                    vector<int>vec(26,0);
                    for(k=j;k<j+i;k++){
                        vec[st[k]-'a']++;
                    }
                    for(k=0;k<26;k++){
                        if(v[k]!=vec[k]){
                            t=1;
                            break;
                        }
                    }
                   if(t==1)break;
                }
                if(t==0)return i;
            }
        }
        return n;
    }
};