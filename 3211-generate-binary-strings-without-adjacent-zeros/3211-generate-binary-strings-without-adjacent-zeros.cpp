class Solution {
    vector<string>ans;
    void solve(int i,int n,string s){
        if(s.size()==n){
            ans.push_back(s);
            return;
        }
        if(i==0){
            solve(1,n,s+'0');
        }
        solve(0,n,s+'1');
    }
    
public:
    vector<string> validStrings(int n) {
        solve(0,n,"");
        return ans;
    }
};