class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        set<int>st;
        int i,j,l,m,t=0;
        //k=1;
        for(i=0;i<arr.size();i++){
            st.insert(arr[i]);
        }
        for(i=1;i<10000;i++){
            if(!(st.count(i))){
                t++;
            }
            if(t==k){
                return i;
            }
        }
        return -1;
    }
};