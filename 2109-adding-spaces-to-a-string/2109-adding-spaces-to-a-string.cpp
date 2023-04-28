class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int i,j=0;
        string a;
        for(i=0;i<s.size();i++){
            //s.insert(spaces[i]+i," ");
            if(j<spaces.size()&&i==spaces[j]){
                a+=' ';
                j++;
            }
            a+=s[i];
        }
        return a;
    }
};