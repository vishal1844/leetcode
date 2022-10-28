class Solution {
public:
    string capitalizeTitle(string title) {
        int i,j,k,l,m,t;
        for(j=0,i=0;i<=title.size();i++){
            if(i==title.size()||title[i]==' '){
                if(i-j>2){
                    //cout<<i-j<<" ";
                    title[j]=toupper(title[j]);
                    //cout<<title[j]<<" "<<i;
                    j=i+1;
                }
                else{
                    j=i+1;
                }
            }
            else{
                title[i]=tolower(title[i]);
            }
        }
        return title; 
    }
};