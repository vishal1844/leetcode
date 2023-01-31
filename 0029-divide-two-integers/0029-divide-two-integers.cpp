class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==-2147483648&&divisor==-1){
            return INT_MAX;
        }
       // return 0;
        //cout<<INT_MAX;
        if(dividend>INT_MAX||dividend<INT_MIN){
            cout<<"UJ";
            return INT_MAX;
        }
        if(dividend<INT_MIN){
            if(divisor==-1){
                return INT_MAX;
            }
            else{
                return dividend/divisor;
            }
        }
//         if(dividend<0&&divisor<0){
//             dividend=-1*dividend;
//             divisor=-1*divisor;
//             cout<<dividend<<" "<<divisor;
            
        //2147483647
        
        //return 0;
        int t=dividend/divisor;
        return t;
        
    }
};