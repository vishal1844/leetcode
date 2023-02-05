class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int i,j,k,l,m,t=0;
        unordered_set<char>st({'a','e','i','o','u'});
        vector<int>v(words.size(),0);
        vector<int>vec;
        for(i=0;i<words.size();i++){
            if(words[i].size()=='1'){
                if(st.count(words[i][0])){
                    t++;
                    v[i]=t;
                }
            }
            else if(st.count(words[i][0])&&st.count(words[i][words[i].size()-1])){
                t++;
                v[i]=t;
            }
            else{
                v[i]=t;
            }
        }
        for(i=0;i<queries.size();i++){
            if(queries[i][0]==0){
                vec.push_back(v[queries[i][1]]);
            }
            else{
                vec.push_back(v[queries[i][1]]-v[(queries[i][0])-1]);
            }
        }
        return vec;
        
    }
};