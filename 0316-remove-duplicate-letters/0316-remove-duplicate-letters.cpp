class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.size(),i,j,k,l,m,t=0;
        vector<int>v(26,0);
        for(i=0;i<n;i++){
            v[s[i]-'a']++;
        }
        string res;
        vector<int>take(26,0);
        for(i=0;i<n;i++){
            k=s[i]-'a';
            v[k]--;
            if(take[k]==1)continue;
            while(!res.empty()&&res.back()>s[i]&&v[res.back()-'a']!=0){
                take[res.back()-'a']=0;
                res.pop_back();
            }
            take[k]=1;
            res+=s[i];
        }
        return res;
        
    }
};