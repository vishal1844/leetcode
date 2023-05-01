class Solution {
public:
    double average(vector<int>& salary) {
        double k;
        int i,j,l,m,t=0;
        sort(salary.begin(),salary.end());
        for(i=1;i<salary.size()-1;i++){
            t+=salary[i];
        }
        k=(double)t/(salary.size()-2);
        return k;
    }
};