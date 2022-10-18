class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char>st(sentence.begin(),sentence.end());
       // for(auto itr:st){
       //     cout<<itr<<" ";
       // }
       // string t="abcdefghijklmnopqrstuvwxyz";
        if(st.size()==26){
            return true;
        }
        return false;
    }
};