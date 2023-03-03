class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int i,j,k,l=0,m,t=0;
        map<int,int>mp;
        vector<int>v;
        for(i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto itr:mp){
            v.push_back(itr.second);
        }
        sort(v.begin(),v.end(),greater<int>());
        for(i=0;i<v.size();i++){
            t+=v[i];
            l++;
            if(t>=arr.size()/2){
                return l;
            }
            //l++;
        }
        return l;
    }
};