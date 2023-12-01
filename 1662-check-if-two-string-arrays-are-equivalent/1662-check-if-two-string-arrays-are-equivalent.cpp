class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i,j,k,l,m=0;
        i=0;
        j=0;
        k=0;
        l=0;
        while(i<word1.size()&&j<word2.size()){
            if(word1[i][k]!=word2[j][l])return 0;
            k++;
            l++;
            if(word1[i].size()==k){
                i++;
                k=0;
            }
            if(word2[j].size()==l){
                j++;
                l=0;
            }
        }
        if(i==word1.size()&&j==word2.size())return 1;
        return 0;
    }
};