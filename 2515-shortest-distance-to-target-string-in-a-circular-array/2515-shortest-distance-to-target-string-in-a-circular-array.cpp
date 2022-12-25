class Solution {
public:
    int closetTarget(vector<string>& words, string target, int start) {
        int i,j,k,m,mini=INT_MAX;
        int n=words.size();
        for(i=0;i<words.size();i++){
            if(words[i]==target){
                mini=min(mini,abs(i-start));
                mini=min(mini,abs(n-start+i));
                mini=min(mini,abs(n-i+start));
            }
        }
            if(mini==INT_MAX)return -1;
            return mini;
    }
};