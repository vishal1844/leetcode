class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i,j,l,m,t=0,s=0,c=0;
       int n=num.size()-1;
        vector<int>v;
        while(n>=0||c==1||k!=0){
            l=0;
            if(k!=0){
                
            m=k%10;
                l+=m;
            k=k/10;
            }
            if(n>=0){
                l+=num[n];
                n--;
            }
            l+=c;
            v.push_back(l%10);
            c=l/10;
        }
        reverse(v.begin(),v.end());
        return v;
    }
};