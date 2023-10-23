class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0)return 0;
        while(n%4==0){
            n/=4;
        }
       // cout<<n<<" ";
        if(n==1)return 1;
        if(n==0)return 1;
        return 0;
        
    }
};