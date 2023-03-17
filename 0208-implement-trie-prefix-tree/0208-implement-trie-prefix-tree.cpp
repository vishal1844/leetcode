class Trie {
    unordered_set<string>st;
public:
    Trie() {
        
    }
    
    void insert(string word) {
        st.insert(word);
    }
    
    bool search(string word) {
        if(st.count(word))
            return true;
        return false;
    }
    
    bool startsWith(string prefix) {
        for(auto itr:st){
            if(itr.substr(0,prefix.size())==prefix){
                return true;
            }
        }
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */