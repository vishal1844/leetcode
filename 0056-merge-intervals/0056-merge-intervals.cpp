class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        int i,j,k,l=intervals[0][0],m=intervals[0][1];
        for(i=1;i<intervals.size();i++){
            if(m>=intervals[i][0]){
                m=max(m,intervals[i][1]);
            }
            else{
                ans.push_back({l,m});
                l=intervals[i][0];
                m=intervals[i][1];
                //if(i==intervals.size()-1)return ans;
            }
        }
        ans.push_back({l,m});
        return ans;
    }
};