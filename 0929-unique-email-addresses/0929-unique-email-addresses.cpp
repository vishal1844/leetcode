class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int i,j,k,l,m;
        //int n=emails.size();
        string s,t;
        //char r;
        unordered_map<string,int>st;
        for(auto itr:emails){
            //t=emails[i];
            s="";
            i=0;
            while(itr[i]!='@'&&itr[i]!='+'){
                if(itr[i]=='.'){
                    i++;
                    //continue;
                }
                else{
                    s+=itr[i];
                    i++;
                }
            }
            //j++;
           while(itr[i]!='@'){
               i++;
               //continue;
           }
            //j++;
            while(i<itr.size()){
                s+=itr[i];
                i++;
            }
            st[s]++;
        }
        return st.size();
    }
};