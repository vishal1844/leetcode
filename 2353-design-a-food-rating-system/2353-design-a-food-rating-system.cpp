class FoodRatings {
    map<string,set<pair<int,string>>>mp;
    map<string,string>mps;
    map<string,int>mpe;
public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int i,j,k,l,m,t=0;
        for(i=0;i<foods.size();i++){
            mps[foods[i]]=cuisines[i];
            mpe[foods[i]]=ratings[i];
            mp[cuisines[i]].insert({-ratings[i],foods[i]});
        }
    }
    
    void changeRating(string food, int newRating) {
        int old=mpe[food];
        mpe[food]=newRating;
        mp[mps[food]].erase({-old,food});
        mp[mps[food]].insert({-newRating,food});
    }
    
    string highestRated(string cuisine) {
        auto itr=mp[cuisine].begin();
        return itr->second;
        
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */