class Solution {
public:
    string getHint(string secret, string guess) {
        int i,j,k,l,m=0,t=0;
        string s;
        unordered_map<char,int>mp;
        for(i=0;i<secret.size();i++){
            if(secret[i]!=guess[i]){
                mp[secret[i]]++;
            }
            else{
                t++;
            }
        }
        s+=to_string(t);
        s+='A';
        for(i=0;i<guess.size();i++){
            if(secret[i]!=guess[i]){
                if(mp.find(guess[i])!=mp.end()){
                    m++;
                    mp[guess[i]]--;
                    if(mp[guess[i]]==0){
                        mp.erase(guess[i]);
                    }
                }
            }
        }
        s+=to_string(m);
        s+='B';
        return s;
        
    }
};