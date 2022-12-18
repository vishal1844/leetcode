class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int i,j,k,l,m,n,t=0;
        stack<int>st;
        n=temp.size();
        vector<int>v(n,0);
       //v[n-1]=0;
       // n=temp.size();
        //st.push(n-1);
        for(i=n-1;i>=0;i--){
            while(st.size()&&temp[st.top()]<=temp[i]){
                st.pop();
            }
            if(st.size()){
                k=st.top()-i;
                v[i]=k;
            }
                st.push(i);
        }
        return v;
    }
};