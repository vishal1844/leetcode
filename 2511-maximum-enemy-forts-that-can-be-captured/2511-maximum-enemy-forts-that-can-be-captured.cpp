class Solution {
public:
    int captureForts(vector<int>& forts) {
        int i,j,k,l,m,t=0,maxi=0;
        for(i=0;i<forts.size();i++){
            if(forts[i]==1){
                for(j=i+1;j<forts.size();j++){
                    if(forts[j]==1){i=j;}
                    if(forts[j]==-1){
                        maxi=max(maxi,j-i-1);
                        i=j-1;
                        break;
                    }
                }
            }
            if(forts[i]==-1){
                for(j=i+1;j<forts.size();j++){
                    if(forts[j]==-1){i=j;}
                    if(forts[j]==1){
                        maxi=max(maxi,j-i-1);
                        i=j-1;
                        break;
                    }
                }
            }
        }
        return maxi;    
    }
};