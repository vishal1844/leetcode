class Solution {
public:
    int maximum69Number (int num) {
        int i,j,k,l,t;
        string s=to_string(num);
        for(i=0;i<s.size();i++){
            if(s[i]!='9'){
                s[i]='9';
                break;
            }
        }
        i=stoi(s);
        return i;
    }
};