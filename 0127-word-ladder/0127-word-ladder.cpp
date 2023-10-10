class Solution {
public:
    int ladderLength(string begin, string end, vector<string>& wordList) {
        set<string>st(wordList.begin(),wordList.end());
        int maxi=INT_MAX;
        queue<pair<string,int>>q;
        q.push({begin,1});
        st.erase(begin);
        while(!q.empty()){
            auto itr=q.front();
            q.pop();
            string s=itr.first;
            int l=itr.second;
            if(s==end)return l;
            for(int i=0;i<s.size();i++){
                char str=s[i];
                for(char c='a';c<='z';c++){
                    s[i]=c;
                    if(st.count(s)){
                        st.erase(s);
                        q.push({s,l+1});
                    }
                }
                s[i]=str;
            }
        }
        return 0;
        
    }
};