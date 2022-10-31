class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        int i,j,k,l;
        for(i=0;i<magazine.size();i++){
            mp[magazine[i]]++;
        }
        for(i=0;i<ransomNote.size();i++){
            //for(auto itr:mp){
            if(mp.find(ransomNote[i])!=mp.end()&&mp[ransomNote[i]]!=0){
                --(mp[ransomNote[i]]);
                //cout<<"helo";
                //cout<<mp[ransomNote[i]];
                //(itr.second)--;
            }
            else
                return false;
            }
        //}
        return true;
    }
};