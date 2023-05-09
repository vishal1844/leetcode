class Solution {
    void solve(int ind,string s,vector<string>&ans,vector<string>&v,string&digits){
        if(s.size()==digits.size()){
            ans.push_back(s);
            return;
        }
            int k=digits[ind]-'0';
            for(int j=0;j<v[k].size();j++){
                s+=v[k][j];
                solve(ind+1,s,ans,v,digits);
                s.pop_back();
            }
        return;
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string>v;
        if(digits=="")return v;
        vector<string>vec;
        vec.push_back("");
        vec.push_back("");
        for(char ch='a';ch<='z';ch++){
            string s;
            for(int i=0;i<=2;i++){
                s+=ch;
                ch++;
            }
            ch--;
            //cout<<s<<" ";
            vec.push_back(s);
            if(ch=='o')break;
        }
        vec.push_back("pqrs");
        vec.push_back("tuv");
        vec.push_back("wxyz");
        solve(0,"",v,vec,digits);
        return v;
    }
};