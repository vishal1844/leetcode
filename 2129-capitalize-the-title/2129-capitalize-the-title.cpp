class Solution {
public:
    string capitalizeTitle(string title) {
        int i,j,k,l,m,t=0;
        string s;
        for(i=0;i<title.size();i++){
            title[i]=tolower(title[i]);
        }
        for(i=0;i<title.size();i++){
            t=0;
            l=i;
                while(i<title.size()&&title[i]!=' '){
                    t++;
                    i++;
                }
            if(t>2){
                title[l]=toupper(title[l]);
            }
        }
        return title;
    }
};