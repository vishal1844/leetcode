class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long int i,j,k,l,m,t=0;
        vector<long long>v;
        if(num%3!=0){
            return v;
        }
        k=num/3;
        v.push_back(k-1);
        v.push_back(k);
        v.push_back(k+1);
        return v;
        
    }
};