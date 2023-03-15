class Solution {
    public:
    static bool cmp(vector<int>&a,vector<int>&b){
            if(a[1]<b[1]){
                return true;
            }
        if(a[1]==b[1]){
            return a[0]<b[0];
        }
        return false;
    }
public:
    int maxEvents(vector<vector<int>>& events) {
        int i,j,k,l,m,t=0;
        sort(events.begin(),events.end(),cmp);
        set<int>st;
        for(i=1;i<=100000;i++){
            st.insert(i);
        }
        for(i=0;i<events.size();i++){
            k=events[i][0];
            l=events[i][1];
            auto itr=st.lower_bound(k);
            if(itr==st.end()||(*itr)>l){
                continue;
            }
            else{
                t++;
                st.erase(*itr);
            }
        }
        return t;
        
    }
};