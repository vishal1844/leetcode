class Solution {
public:
    int candy(vector<int>& ratings) {
        int i,j,k,l,m,t=0;
        int n=ratings.size();
        if(n==1)return 1;
        int sum=n;
        for(i=1;i<n;){
            if(ratings[i]==ratings[i-1]){
                i++;
                continue;
            }
            int peak=0;
            while(i<n&&ratings[i]>ratings[i-1]){
                peak++;
                sum+=peak;
                i++;
            }
            int valley=0;
            while(i<n&&ratings[i-1]>ratings[i]){
                valley++;
                sum+=valley;
                i++;
            }
            sum-=min(peak,valley);
        }
        return sum;
    }
};