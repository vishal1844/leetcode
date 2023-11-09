class MyCalendarThree {
    map<int,int>mp;
public:
    MyCalendarThree() {
        
    }
    
    int book(int s, int e) {
        mp[s]++;
        mp[e]--;
        int t=0,m=0;
        for(auto itr:mp){
            t+=itr.second;
            m=max(m,t);
        }
        return m;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */