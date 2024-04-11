class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        int i,j,k,l,m,t=0;
        for(auto itr:students){
            q.push(itr);
        }
        i=0;
        while(t<q.size()&&i<sandwiches.size()){
            if(q.front()==sandwiches[i]){
                q.pop();
                i++;
                t=0;
                continue;
            }
            else{
                auto itr=q.front();
                q.pop();
                q.push(itr);
                t++;
            }
        }
        return q.size();
        
    }
};