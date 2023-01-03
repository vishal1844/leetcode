class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int i,j,k,l,m,t=0;
        for(i=0;i<strs[0].size();i++){
            char s=strs[0][i];
            for(j=1;j<strs.size();j++){
                //cout<<j<<i<<endl;
                if(s<=strs[j][i]){
                    s=strs[j][i];
                }
                else{
                    
                    //cout<<strs[j][i]<<" "<<j<<" "<<i<<" ";
                    t++;
                    break;
                }
            }
        }
        return t;
    }
};