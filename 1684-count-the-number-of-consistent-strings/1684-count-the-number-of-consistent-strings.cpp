class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char>st;
        int i,j,k,l,m,t=0;
        for(auto itr:allowed){
            st.insert(itr);
        }
        for(i=0;i<words.size();i++){
            for(auto itr:words[i]){
                if(!st.count(itr)){
                    t--;
                    break;
                }
            }
            t++;
        }
        return t;
    }
};