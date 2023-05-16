class MapSum {
    map<string,int>mp;
public:
    MapSum() {
    }
    
    void insert(string key, int val) {
        mp[key]=val;
    }
    
    int sum(string prefix) {
        int sum=0;
        for(auto itr:mp){
            if(itr.first.size()>=prefix.size()){
                string t=itr.first;
                string s=t.substr(0,prefix.size());
                if(s==prefix){
                    sum+=itr.second;
                }
            }
        }
        return sum;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */