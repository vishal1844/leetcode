class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int low=0;
        int high=tokens.size()-1;
        int score=0;
        while(low<=high){
            if(power>=tokens[low]){
                score++;
                power-=tokens[low];
                low++;
            }
            else if(score>=1&&low!=high){
                score--;
                power+=tokens[high];
                high--;
            }
            else return score;
        }
        return score;
    }
};