class Solution {
public:
    int compress(vector<char>& chars) {
        int i,j=0,k,l,m=1,t=0;
        for(i=0;i<chars.size()-1;i++){
            if(chars[i]==chars[i+1]){
                m++;
            }
            else{
                t++;
                chars[j++]=chars[i];
                if(m>1){
                string s=to_string(m);
                for(k=0;k<s.size();k++){
                    t++;
                    chars[j++]=s[k];
                } }    
                m=1;
            }
        }
        t++;
                chars[j++]=chars[i];
        if(m>1){
                string s=to_string(m);
                for(k=0;k<s.size();k++){
                    t++;
                    chars[j++]=s[k];
                }   }
        
        return t;
        
    }
};