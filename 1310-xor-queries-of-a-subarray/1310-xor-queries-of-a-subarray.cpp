class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int i,j,k,l,m,t=0;
        vector<int>v;
        for(i=1;i<arr.size();i++){
            arr[i]=arr[i]^arr[i-1];
        }
        for(auto itr:queries){
            if(itr[0]==0){
                v.push_back(arr[itr[1]]);
            }
            else{
                k=arr[itr[0]-1]^arr[itr[1]];
                v.push_back(k);
            }
        }
        return v;
    }
};