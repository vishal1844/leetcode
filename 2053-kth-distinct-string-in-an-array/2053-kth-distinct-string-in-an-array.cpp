class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>st;
        for(auto itr:arr){
            st[itr]++;
        }
        for(auto itr:arr){
            if(st[itr]==1)k--;
            if(k==0){
                return itr;
            }
        }
        return "";
    }
};