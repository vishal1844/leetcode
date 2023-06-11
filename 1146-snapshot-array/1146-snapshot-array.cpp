class SnapshotArray {
    map<int,map<int,int>>mp;
    int snap_id=0;
public:
    SnapshotArray(int length) {
        for(int i=0;i<length;i++){
            map<int,int>mps;
            mps[0]=0;
            mp[i]=mps;
        }
    }
      
    void set(int index, int val) {
        mp[index][snap_id]=val;
    }
    
    int snap() {
        return snap_id++;
    }
    
    int get(int index, int snap_id) {
        auto itr=mp[index].upper_bound(snap_id);
        itr--;
        return itr->second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */