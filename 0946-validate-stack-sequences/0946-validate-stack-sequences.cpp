class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i,j,k,l,m,t=0;
        i=0;
        j=0;
        for(auto itr:pushed){
            pushed[i]=itr;
            while(i>=0&&pushed[i]==popped[j]){
                j++;
                i--;
            }
            i++;
        }
        return i==0;
        
    }
};