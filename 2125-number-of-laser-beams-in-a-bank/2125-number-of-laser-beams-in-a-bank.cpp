class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int i=0,j,k,l,m,t=0;
        for(i=0;i<bank.size()-1;i++){
            k=0,l=0;
            for(j=0;j<bank[0].size();j++){
                if(bank[i][j]=='1')k++;
            }
            if(k)break;
        }
        l=0;
        //cout<<bank.size();
            while(i<bank.size()-1){
            i++;
               // cout<<i<<" ";
               // l=0;
            for(j=0;j<bank[0].size();j++){
                if(bank[i][j]=='1')l++;
            }
            //cout<<k<<" "<<l;
                if(l){
                    t+=(k*l);
                    k=l;
                    l=0;
                    //break;
                }
           // t+=(k*l);
        }
        return t;}
};