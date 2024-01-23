class Solution {
    set<char>st;
    int t=0;
    void lenUniqueChar(int i,int n,vector<string>&arr){
        if(i>=n){
            int p=st.size();
            t=max(t,p);
            return;
        }
        set<char>str;
        int take=0;
        for(auto itr:arr[i]){
            if(st.count(itr)||str.count(itr)){
                take=1;
                break;
            }
            str.insert(itr);
        }
        if(take==0){
            for(auto itr:str){
                st.insert(itr);
            }
            lenUniqueChar(i+1,n,arr);
            for(auto itr:str){
                st.erase(itr);
            }
        }
      //  st.erase(str.begin(),str.end());
        lenUniqueChar(i+1,n,arr);
    }
public:
    int maxLength(vector<string>& arr) {
        lenUniqueChar(0,arr.size(),arr);
        return t;
    }
};