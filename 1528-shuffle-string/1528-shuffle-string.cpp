class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int i,j,k,l=0;
        string st="";
        vector<char>v(indices.size(),0);
        for(i=0;i<indices.size();i++){
            //cout<<indices[i]<<" ";
            v[indices[i]]=s[i];
        }
       for(i=0;i<v.size();i++){
            st+=v[i];
        }
        return st;
        
    }
};