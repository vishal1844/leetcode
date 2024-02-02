class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        string s=to_string(low);
        string str=to_string(high);
        string st="";
        for(int i=s.size();i<=str.size();i++){
            for(int j=1;j<=10-i;j++){
                //cout<<st<<" ";
                 st="";
                char c=j+'0';
                while(st.size()<i){
                    st+=c;
                    c++;
                }
                int k=stoi(st);
                if(k>=low&&k<=high){
                   // cout<<st<<" ";
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }
};