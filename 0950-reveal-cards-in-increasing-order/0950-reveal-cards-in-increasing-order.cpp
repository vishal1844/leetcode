class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int i,j,k,l,m,t=0;
        vector<int>v(deck.size(),0);
        sort(deck.begin(),deck.end());
        j=0;
        int skip=0;
        int n=deck.size();
        i=0;
        while(i<deck.size()){
            if(v[j]==0){
                if(skip==0){
                    v[j]=deck[i];
                    i++;
                }
                skip=!skip;
            }
            j=(j+1)%n;
        }
        return v;
    }
};