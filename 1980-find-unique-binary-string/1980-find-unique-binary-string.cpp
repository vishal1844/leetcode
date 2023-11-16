class Solution {
    int solve(int n,string &s,unordered_set<string>&st){
        if(s.size()==n){
            if(!st.count(s))return 1;
            return 0;
        }
        s+='0';
        if(solve(n,s,st))return 1;
        s.pop_back();
        s+='1';
        if(solve(n,s,st))return 1;
        s.pop_back();
        return 0; 
    }
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_set<string>st(nums.begin(),nums.end());
        string s="";
        int n=nums.size();
        int t= solve(n,s,st);
        return s;
    }
};