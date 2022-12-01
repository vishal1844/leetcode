class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>v;
        int i,j,k,l,t=INT_MIN;
        for(i=0;i<candies.size();i++){
            t=max(t,candies[i]);
        }
        for(i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=t){
                v.push_back(true);
            }
            else{
                v.push_back(false);
            }
        }
        return v;
    }
};