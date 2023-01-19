class cmp{
    public:
    bool operator()(string a,string b){
        return a+b>b+a;
    }
};
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int i,j,k,l,m,t=0;
        vector<string>v;
        for(i=0;i<nums.size();i++){
            string s=to_string(nums[i]);
            v.push_back(s);
        }
        string s="";
        sort(v.begin(),v.end(),cmp());
        for(i=0;i<v.size();i++){
            s+=v[i];
        }
        return s[0]=='0'?"0":s;
    }
};