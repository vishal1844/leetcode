class Solution {
    long long makepalindrome(long long num,int isfalse){
        long long ans=num;
        long long i,j,k,l,m,t=0;
        if(isfalse){
            num/=10;
        }
        while(num!=0){
            k=num%10;
            ans=ans*10+k;
            num/=10;
        }
        return ans;
    }
public:
    string nearestPalindromic(string s) {
        int n=s.size();
        int i,j,k,l,m,t=0;
        int mid=(n+1)/2;
        long long num=stol(s.substr(0,mid));
        vector<long long>v;
        v.push_back(makepalindrome(num,n%2));
        v.push_back(makepalindrome(num-1,n%2));
        v.push_back(makepalindrome(num+1,n%2));
        v.push_back((long long)pow(10,n)+1);
        v.push_back((long long)pow(10,n-1)-1);
        long long diff=LONG_MAX;
        long long original=stol(s);
        long long ans=-1;
        for(i=0;i<v.size();i++){
            if(v[i]==original)continue;
            if(abs(v[i]-original)<diff){
                ans=v[i];
                diff=abs(v[i]-original);
            }
            else if(abs(v[i]-original)==diff){
                ans=min(ans,v[i]);
            }
        }
        return to_string(ans);
    }
};