class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long int i,j,l,m,t=0,sum=0;
        for(i=0;i<chalk.size();i++){
            sum+=chalk[i];
            if(sum>k){
                return i;
            }
        }
        j=k%sum;
        for(i=0;i<chalk.size();i++){
            if(chalk[i]<=j){
                j-=chalk[i];
            }
            else return i;
        }
        return 0;
    }
};