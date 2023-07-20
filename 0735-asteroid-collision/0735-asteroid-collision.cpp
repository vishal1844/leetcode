class Solution {
public:
    vector<int> asteroidCollision(vector<int>& as) {
        vector<int>v;
        stack<int>st;
        if(as.size()==0)return v;
        int i,j,k,l,m,t=0;
        //st.push(as[0]);
        for(i=0;i<as.size();i++){
            t=0;
            while(!st.empty()&&(st.top()>0&&as[i]<0)){
                if(abs(st.top())<abs(as[i])){
                   st.pop();
                    continue;
                }
                else if(abs(st.top())==abs(as[i])){
                    st.pop();
                }
                t=1;
                break;
            }
            if(t==0){
                st.push(as[i]);
            }
        }
        while(st.size()){
            //cout<<st.top()<<" ";
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};