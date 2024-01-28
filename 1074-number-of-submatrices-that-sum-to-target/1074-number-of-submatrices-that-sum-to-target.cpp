class Solution {
    int subarraySum(vector<int>&sum,int tar){
        map<int,int>mp;
        mp[0]=1;
        int count=0;
        int t=0;
        for(int i=0;i<sum.size();i++){
            t+=sum[i];
            if(mp.find(t-tar)!=mp.end()){
                count+=mp[t-tar];
            }
            mp[t]++;
        }
        return count;
    }
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int t=0;
        for(int i=0;i<matrix.size();i++){
            vector<int>sum(matrix[0].size(),0);
            for(int j=i;j<matrix.size();j++){
                for(int k=0;k<matrix[0].size();k++){
                    sum[k]+=matrix[j][k];
                }
                t+=subarraySum(sum,target);
            }
        }
        return t;
    }
};