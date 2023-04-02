class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int i,j=0,k,l,m,t=0;
        if(arr.size()==1){
            return 1;
        }
        for(i=0;i<arr.size();i++){
            j=max(j,arr[i]);
            if(j==i)t++;
        }
        return t;
    }
};