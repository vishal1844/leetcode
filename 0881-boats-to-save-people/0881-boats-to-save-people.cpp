class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i,j,k,l,m,t=0;
        sort(people.begin(),people.end());
        i=0;
        j=people.size()-1;
        while(i<=j){
            if(people[i]+people[j]<=limit){
                i++;
            }
            t++;
            j--;
        }
        return t;
    }
};