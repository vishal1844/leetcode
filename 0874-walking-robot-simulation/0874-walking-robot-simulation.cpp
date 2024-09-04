class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<string>st;
        for(auto itr:obstacles){
            string s=to_string(itr[0])+"_"+to_string(itr[1]);
            st.insert(s);
        }
        int maxi=0;
        int x=0;
        int y=0;
        pair<int,int>dir={0,1};
        for(auto itr:commands){
            if(itr==-2){
                dir={-dir.second,dir.first};
            }
            else if(itr==-1){
                dir={dir.second,-dir.first};
            }
            else{
                for(int i=1;i<=itr;i++){
                    int newx=x+dir.first;
                    int newy=y+dir.second;
                    string s=to_string(newx)+"_"+to_string(newy);
                    if(st.find(s)!=st.end()){
                        break;
                    }
                    x=newx;
                    y=newy;
                }
                maxi=max(maxi,(x*x+y*y));
            }
        }
        return maxi;
    }
};