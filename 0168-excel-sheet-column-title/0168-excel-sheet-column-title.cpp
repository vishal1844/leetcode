class Solution {
public:
    string convertToTitle(int c) {
        string s;
        while(c){
            c--;
            int t=c%26;
            s+=(t+'A');
            c/=26;
        }
        reverse(s.begin(),s.end());
        return s;
        
    }
};