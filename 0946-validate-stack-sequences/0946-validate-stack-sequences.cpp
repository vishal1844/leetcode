class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i,j,k,l,m,t=0;
        stack<int>s;
        j=0;
        for(i=0;i<pushed.size();i++){
            if(pushed[i]==popped[j]){
                j++;
                while(!s.empty()&&s.top()==popped[j]){
                    j++;
                    s.pop();
                }
            }
            else{
            s.push(pushed[i]);
            }
        }
        while(!s.empty()){
            if(s.top()==popped[j]){
                s.pop();
                j++;
            }
            else{
                return false;
            }
        }
        return true;
    }
};