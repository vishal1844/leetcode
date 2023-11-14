class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<char>st;
        for(auto itr:s)
            st.insert(itr);
        int sum=0;
        for(auto itr:st){
            //cout<<itr<<" ";
            int i=-1;
            int j=0;
            for(int t=0;t<s.size();t++){
                if(s[t]==itr){
                    if(i==-1)i=t;
                    else{
                        j=t;
                    }
                }
            }
            //cout<<i<<j<<" ";
            unordered_set<char>str;
            for(int t=i+1;t<j;t++){
                str.insert(s[t]);
            }
            sum+=str.size();
        }
        return sum;
    }
};