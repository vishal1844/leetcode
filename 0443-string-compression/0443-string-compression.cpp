class Solution {
public:
    int compress(vector<char>& chars) {
        int i,j,k,l,m=0,t=0;
        for(i=0;i<chars.size();i++){
            if(i<chars.size()-1&&chars[i]==chars[i+1]){
                j=1;
                while(i<chars.size()-1&&chars[i]==chars[i+1]){
                    i++;
                    j++;
                }
                string s=to_string(j);
                chars[m++]=chars[i];
                t++;
                l=0;
                while(l<s.size()){
                    chars[m++]=s[l];
                    t++;
                    l++;
                }
            }
            else{
                chars[m++]=chars[i];
                t++;
            }
        }
        return t;
        
        
    }
};