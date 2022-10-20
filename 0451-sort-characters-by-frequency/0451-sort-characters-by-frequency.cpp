class Solution {
public:
    string frequencySort(string s) {
        string st;
        int i,j,k,l;
        unordered_map<char,int>mp;
        for(i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        vector<pair<int,char>>v;
        for(auto itr:mp){
            v.push_back({itr.second,itr.first});
        }
        sort(v.begin(),v.end(),greater<>()); 
        for(auto itr:v){
            l=itr.first;
            //cout<<l;
            while(l--){
                //cout<<"heloo";
                st+=itr.second;
                //(itr.second)--;
            }
        }
        return st;
        
    }
};