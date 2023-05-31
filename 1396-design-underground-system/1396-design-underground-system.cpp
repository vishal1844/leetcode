class UndergroundSystem {
    map<int,pair<string,int>>mp;
    map<string,pair<int,int>>mps;
public:
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        mp[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto itr=mp[id];
        mp.erase(id);
        string s=itr.first+'_'+stationName;
        mps[s].first+=t-itr.second;
        mps[s].second++;
        //mps[itr.first+'_'+stationName]={mps[id].first,mps[id].second};
    }
    
    double getAverageTime(string startStation, string endStation) {
        string s=startStation+'_'+endStation;
        auto itr=mps[s];
        double d=(double)itr.first/itr.second;
        return d;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */