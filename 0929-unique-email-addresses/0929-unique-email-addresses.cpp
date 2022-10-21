class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int i,j,k,l,m,t;
        string s;
        int n=emails.size();
        unordered_set<string>st;
        for(i=0;i<n;i++){
            s="";
            string r=emails[i];
            int j=0;
            while(r[j]!='@'&&r[j]!='+'){
                if(r[j]=='.'){
                    j++;
                    continue;
                }
                s+=r[j];
                j++;
            }
            while(r[j]!='@'){
                j++;
            }
            while(j<r.size()){
                s+=r[j];
                j++;
            }
            st.insert(s);
        }
        return st.size();
    }
};