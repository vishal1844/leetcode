class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int i,j,k,l,m,t=0;
        m=s1.size();
        if(s2.size()<m){
            return false;
        }
        sort(s1.begin(),s1.end());
        unordered_set<char>st;
        for(i=0;i<s1.size();i++){
            st.insert(s1[i]);
        }
        for(i=0;i<=s2.size()-s1.size();i++){
            if(st.count(s2[i])){
                string s=s2.substr(i,m);
                sort(s.begin(),s.end());
                if(s==s1)
                    return true;
            }
        }
        return false;
        
    }
};