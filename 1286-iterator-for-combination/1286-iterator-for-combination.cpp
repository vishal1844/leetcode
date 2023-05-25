class CombinationIterator {
    vector<string>v;
    int i=0;
    void solve(int ind,string characters,int k,string s){
        if(k==s.size()){
            v.push_back(s);
            return;
        }
        if(ind==characters.size())return ;
        for(int i=ind;i<characters.size();i++){
            solve(i+1,characters,k,s+characters[i]);
        }
    }
public:
    CombinationIterator(string characters, int k) {
        string s="";
        // vector<string>v;
        solve(0,characters,k,s);
    }
    
    string next() {
        string s=v[i];
        i++;
        return s;
    }
    
    bool hasNext() {
        if(i==v.size()){
            return false;
        }
        return true;
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */