class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long int i,j,l,m,t=0;
        for(i=0;i<s.size();i++){
            if(s[i]>='0'&&s[i]<='9'){
                t*=s[i]-'0';
            }
            else{
                t++;
            }
        }
        for(i=s.size()-1;i>=0;i--){
            k%=t;
            if(k==0&&isalpha(s[i])){
                return string(1,s[i]);
            }
            else if(isdigit(s[i])){
                t/=s[i]-'0';
            }
            else{
                t--;
            }
        }
        return "";
    }
};