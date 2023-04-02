class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        long long int i,j,k,l,m,t=0;
        vector<int>v;
        for(i=0;i<spells.size();i++){
            long long k=ceil(success/(spells[i]*1.0));
            //k=(long long int)r;
            m=lower_bound(potions.begin(),potions.end(),k)-potions.begin();
            v.push_back(potions.size()-m);
        }
        return v;
        
    }
};