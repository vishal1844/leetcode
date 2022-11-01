class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i,j,k,l,t;
        for(i=0,j=s.size()-1;i<=j;){
            if(((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))&&((s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z'))){
                char c=s[i];
                s[i]=s[j];
                s[j]=c;
                //cout<<s[i]<<s[j];
                i++;
                j--;
            }
            else if(!((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))){
                i++;
                //cout<<i<<" ";
            }
            else if(!((s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z'))){
                j--;
            //cout<<j<<" ";
            }
        }
        return s;
    }
};