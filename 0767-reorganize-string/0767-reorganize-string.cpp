class Solution {
public:
    string reorganizeString(string s) {
        vector<int>v(26,0);
        int i,j,k,l,m,t=0;
        for(i=0;i<s.size();i++){
             v[s[i]-'a']++;
            if(v[s[i]-'a']>v[t]){
                //v[s[i]-'a']++;
                t=s[i]-'a';
            }
        }
        i=0;
        //k=t;
        k=v[t];
        //cout<<k<<" ";
        int n=s.size();
        if(k>((n+1)/2)){
            return "";
        }
        while(v[t]){
            s[i]=t+'a';
            v[t]--;
            i+=2;
        }
        //cout<<i<<" ";
        t=i;
        for(i=0;i<26;i++){
            while(v[i]){
                if(t>=s.size())t=1;
                //cout<<t<<" ";
                s[t]=i+'a';
                v[i]--;
                t+=2;
            }
        }
        return s;
    }
};