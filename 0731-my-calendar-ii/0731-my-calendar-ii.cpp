class MyCalendarTwo {
    map<int,int>mp;
public:
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        int t=0;
        mp[start]++;
        mp[end]--;
       for(auto itr:mp){
           t+=itr.second;
           if(t==3){
               mp[start]--;
               mp[end]++;
               return 0;
           }
       }
        return 1;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */