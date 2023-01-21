class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        int i,j,k,l,m,t=0;
        if(strs.size()==1){
            return strs[0];
        }
        for(i=0;i<strs[0].size();i++){
            t=0;
            for(j=1;j<strs.size();j++){
                if(strs[0][i]==strs[j][i]){
                    continue;
                }
                else{
                    t=1;
                    break;
                }
            }
            if(t==0){
                s+=strs[0][i];
            }
            else{
                break;
            }
        }
        return s;
    }
};