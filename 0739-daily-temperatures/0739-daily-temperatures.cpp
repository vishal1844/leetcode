class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n=arr.size();
        int i,j,k,l,m,t,s=0;
        stack<int>st;
        vector<int>v(n,0);
        for(i=n-1;i>=0;i--){
            while(st.size()&&arr[i]>=arr[st.top()]){
                st.pop();
            }
            if(st.size()&&arr[i]<arr[st.top()]){
                v[i]=st.top()-i;
            }
            st.push(i);
        }
        return v;
    }
};