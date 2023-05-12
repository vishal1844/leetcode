class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string>v;
        for(int i=2;i<=n;i++){
            string s;
            for(int j=1;j<i;j++){
               if(__gcd(i,j)==1){
                s+=to_string(j);
                s+='/';
                s+=to_string(i);
                v.push_back(s);
                s.clear();
               }
            }
        }
        return v;
    }
};