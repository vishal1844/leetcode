class Solution {
public:
    int maxConsecutiveAnswers(string answer, int k) {
        int i,j=0,l,m=0,t=0;
        int count=0;
        for(i=0;i<answer.size();i++){
            if(answer[i]=='F'){
                count++;
            }
            if(count>k){
                while(j<answer.size()&&answer[j]!='F'){
                    j++;
                }
                j++;
                count--;
            }
            t=max(t,i-j+1);
        }
         count=0;
        j=0;
        for(i=0;i<answer.size();i++){
            if(answer[i]=='T'){
                count++;
            }
            if(count>k){
                while(j<answer.size()&&answer[j]!='T'){
                    j++;
                }
                j++;
                count--;
            }
            t=max(t,i-j+1);
        }
        return t;
    }
};