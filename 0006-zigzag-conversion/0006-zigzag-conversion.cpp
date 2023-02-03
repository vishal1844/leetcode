class Solution {
public:
    string convert(string s, int numRows) {
        int i,j,k,l,m,t=0;
        if(numRows<=1){
            return s;
        }
        string st="";
        for(i=0;i<numRows;i++){
            for(j=i;j<s.size();){
                st+=s[j];
                if(i>0&&i<numRows-1&&(((j+(numRows-1)*2)-(2*i))<s.size())){
                    st+=s[((j+(numRows-1)*2)-(2*i))];
                }
                j+=((numRows-1)*2);
            }
        }
        return st;
        
    }
};