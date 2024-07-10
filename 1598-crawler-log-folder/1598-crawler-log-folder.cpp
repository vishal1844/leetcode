class Solution {
public:
    int minOperations(vector<string>& logs) {
        int i,j,k,l,m,t=0;
        for(auto itr:logs){
            if(itr=="./")continue;
            else if(itr=="../"){
                if(t>0)
                t--;
            }
            else t++;
        }
        return t;
    }
};