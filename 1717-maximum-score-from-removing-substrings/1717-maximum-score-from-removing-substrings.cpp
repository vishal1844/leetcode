class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int i,j,k,l,m,t=0;
        if(x>y){
            swap(x,y);
            reverse(s.begin(),s.end());
        }
        int a=0;
        int b=0;
        for(i=0;i<s.size();i++){
            if(s[i]=='b')b++;
            else if(s[i]=='a'){
                if(b){
                    b--;
                    t+=y;
                }
                else{
                    a++;
                }
            }
            else{
                t+=(x*min(a,b));
                a=0;
                b=0;
            }
        }
        t+=(x*min(a,b));
        return t;
    }
    
};