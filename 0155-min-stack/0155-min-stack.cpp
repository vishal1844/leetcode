class MinStack {
    stack<int>st;
    int mini=INT_MAX;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(val<=mini){
                st.push(mini);
                mini=val;
            }
            st.push(val);
    }
    
    void pop() {
        if(st.top()==mini){
            st.pop();
            mini=st.top();
            st.pop();
        }else{
            st.pop();
        }
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */