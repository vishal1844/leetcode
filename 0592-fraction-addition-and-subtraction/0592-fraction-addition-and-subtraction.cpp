class Solution {
public:
    string fractionAddition(string e) {
        int n=0;
        int d=1;
        int curn=1;
        int curd=1;
        char exp='+';
        if(e[0]!='-')e='+'+e;
        int i,j,k,l;
        for(i=0;i<e.size();i++){
            if(e[i]=='+'||e[i]=='-'){
                exp='+';
                if(e[i]=='-')exp='-';
                i++;
                curn=0;
                curd=0;
                while(i<e.size()&&e[i]!='/'){
                    curn=curn*10+(e[i]-'0');
                    i++;
                }
                i++;
                while(i<e.size()&&(e[i]!='+'&&e[i]!='-')){
                    curd=curd*10+(e[i]-'0');
                    //cout<<i<<" ";
                    i++;
                }
                if(i!=e.size())i--;
                //cout<<curn<<" "<<curd<<" ";
                int newn=n*curd;
                if(exp=='-')newn-=(d*curn);
                else newn+=(d*curn);
                int newd=d*curd;
                n=newn;
                d=newd;
                //cout<<n<<" "<<d<<" ";
                int t=__gcd(n,d);
                n/=t;
                d/=t;
                if(d<0){
                    n=-1*n;
                    d=-1*d;
                }
            }
        }
        string s="";
        s+=to_string(n);
        s+='/';
        if(n==0){s+='1'; return s;}
        cout<<d<<" ";
        s+=to_string(d);
        return s;
    }
};