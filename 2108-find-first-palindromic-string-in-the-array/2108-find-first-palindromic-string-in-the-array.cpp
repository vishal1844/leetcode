class Solution {
    bool palin(string s){
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j])return 0;
            i++;
            j--;
        }
        return 1;
    }
public:
    string firstPalindrome(vector<string>& words) {
        for(auto itr:words){
            if(palin(itr)){
                return itr;
            }
        }
        return "";
    }
};