class Solution {
public:
    int minimumLength(string s) {
        int i,j,k,l,m,t=1;
        int maxi=s.size();
        i=0;
        int n=s.size();
        j=n-1;
       // cout<<n<<" ";
        if(n==1)return 1;
       // return 1;
        t=0;
        while(i<j){
            if(s[i]!=s[j])return j-i+1;
           // t++;
            char c=s[i];
            while(i<j&& c==s[i]){
                i++;
            }
            if(i==j)return 0;
            char ch=s[j];
            while(j>i&&ch==s[j]){
                j--;
            }
            // if(c!=ch){
            //     return l-k+1;
            // }
        }
        //if(i==j&&i==0)
        //if(j==i)return 1;
        //if(t%2==0)return 1;
        return j-i+1;
    }
};