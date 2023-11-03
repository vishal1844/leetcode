class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int>st;
        int i,j,k,l,t=0;
        t=1;
        i=0;
        vector<string>v;
        while(1){
           // if(st.size()==0){
                st.push(t);
                v.push_back("Push");
            //}
            if(st.top()!=target[i]){
                v.push_back("Pop");
                st.pop();
                t++;
            }
            else{
                st.pop();
                i++;
                t++;
            }
            if(i==target.size())break;
            if(t>n)break;
        }
        return v;
    }
};