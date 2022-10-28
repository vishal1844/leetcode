class Solution {
public:
    string capitalizeTitle(string title) {
        int i,j,k,l,m,t=0;
        string s;
        //cout<<title.size();
        for(i=0;i<title.size();i++){
            title[i]=tolower(title[i]);
        }
       // s[0]=toupper(s[0]);
        for(i=0;i<title.size();i++){
            t=0;
            // if(s[i]!=' '){
            //     l=i;
                //cout<<i;
            l=i;
            j=i;
                while(j<title.size()&&title[j]!=' '){
                    //cout<<i<<" ";
                    
                    t++;
                    j++;
                }
            //cout<<t<<" ";
            i=j;
            if(t>2){
                //cout<<"hello";
                title[l]=toupper(title[l]);
            }
            //cout<<i;
        }
        return title;
    }
};