class RandomizedSet {
public:
    //unordered_set<int>st;
    unordered_map<int,int>mp;
    vector<int>v;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        //if(st.count(val)){
        if(mp.find(val)!=mp.end()){
            return false;
        }
        else{
            //st.insert(val);
            v.push_back(val);
            mp[val]=v.size()-1;
            return true;
        }
    }
    
    bool remove(int val) {
        //if(st.count(val)){
        if(mp.find(val)!=mp.end()){
            //st.erase(val);
            // for(int i=0;i<v.size();i++){
            //     if(v[i]==val){
            //         v[i]=v.back();
            //         v.pop_back();
            //         break;
            //     }
            // }
            v[mp[val]]=v.back();
            mp[v[mp[val]]]=mp[val];
            mp.erase(val);
            v.pop_back();
            return true;
        }
        else{
            return false;
        }
        
    }
    
    int getRandom() {
       //for(auto itr:st)
           return v[rand()%v.size()];
        //return 0;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */