class Solution {
public:
    string reverseWords(string s) {
        string st,s1;
        vector<string>st1;
        int i,j,k,l,t;
        stringstream ss(s);
        while(ss>>st){
            st1.push_back(st);
        }
        reverse(st1.begin(),st1.end());
        for(i=0;i<st1.size();i++){
            if(i!=0) s1+=" ";
            s1+=st1[i];
        }
        return s1;
    }
};