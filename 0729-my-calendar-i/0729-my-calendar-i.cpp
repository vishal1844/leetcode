class MyCalendar {
    map<int,int>mp;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        int i,j,k,l,m,t=0;
        auto itr=mp.upper_bound(start);
        if(itr==mp.end()||end<=itr->second){
        mp[end]=start;
        return true;}
        return false;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */