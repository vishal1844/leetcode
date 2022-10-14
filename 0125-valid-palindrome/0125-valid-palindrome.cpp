class Solution {
public:
    bool isPalindrome(string s) {
       int i,j,l,m;
        string temp="";
        for(i=0;i<s.length();i++){
            if((s[i]>='0'&&s[i]<='9')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
                temp+=tolower(s[i]);
            }
        }
        string k=temp;
        reverse(temp.begin(),temp.end());
        if(temp==k)
            return true;
        else
            return false;
        // bool flag=1;
        // for(i=0,j=temp.length()-1;i<temp.length()/2;i++,j--){
        //     if(temp[i]!=temp[j])
        //     {
        //         flag=0;
        //         return false;
        //     }
        // }
        //if(flag==1){
            //return true;
//          } 
//         else{
// return false;
//         }
    }
};