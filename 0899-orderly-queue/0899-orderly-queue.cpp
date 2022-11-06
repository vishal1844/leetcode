class Solution {
public:
    string orderlyQueue(string s, int k) {
        string r=s;
        int i,j;
        if(k==1){
        for(i=1;i<s.size();i++){
            r=min(r,s.substr(i)+s.substr(0,i));
        }
        return r;
        }
        sort(s.begin(),s.end());
        return s;
    }
};