class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int i,j,k,l,m,t,s=0;
        int freq[26][26]={0};
        for(i=0;i<words.size();i++){
            k=words[i][0]-'a';
            t=words[i][1]-'a';
            if(freq[t][k]>0){
                s+=4;
                freq[t][k]--;
            }
            else
            freq[k][t]++;
        }
        for(i=0;i<26;i++){
            if(freq[i][i]>0){
                s+=2;
                break;
            }
        }
        return s;
    }
};