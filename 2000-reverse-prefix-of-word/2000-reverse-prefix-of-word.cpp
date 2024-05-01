class Solution {
public:
    string reversePrefix(string word, char ch) {
        string s="";
        int t=0;
        int i=0;
        for(i=0;i<word.size();i++){
            if(word[i]!=ch){
                s+=word[i];
            }
            else{
                s+=word[i];
                t=1;
                break;
            }
        }
        if(t==1){
            reverse(s.begin(),s.end());
            s+=word.substr(i+1);
            return s;
        }
        return s;
    }
};