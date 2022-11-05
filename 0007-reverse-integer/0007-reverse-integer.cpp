class Solution {
public:
    int reverse(int x) {
        int n,r,sum=0,t; 
        int ans=x;
        while(x!=0){
            r=x%10; 
             if(sum>INT_MAX/10 || sum<INT_MIN/10)
               return 0; 
               sum=sum*10+r; 
            x=x/10;
        } 
        // if(ans<0)
        //     return -1*sum;
        return sum;
        
    }
};