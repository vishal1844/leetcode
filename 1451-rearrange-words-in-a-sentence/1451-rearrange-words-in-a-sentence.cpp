class Solution {
    static bool cmp(pair<string ,int>a,pair<string,int> b){
        if(a.first.size()==b.first.size()){
            return a.second<b.second;
        }
        return a.first.size()<b.first.size();
    }
public:
    string arrangeWords(string text) {
        string s;
        int i,j,k,l,m,t=0;
        vector<pair<string,int>>v;
        text[0]=text[0]+32;
        for(i=0;i<text.size();i++){
            string st;
            while(i<text.size()&&text[i]!=' '){
                st+=text[i];
                i++;
            }
            v.push_back({st,t++});
        }
        sort(v.begin(),v.end(),cmp);
        for(i=0;i<v.size();i++){
            s+=v[i].first+' ';
        }
        s.pop_back();
        s[0]=s[0]-32;
        return s;
    }
};