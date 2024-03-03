class Solution {
public:
    int minimumOperationsToWriteY(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i,j,k,l,t=0;
        map<int,int>mp,mps;
        i=0;
        j=0;
        k=n/2;
        int s=0;
        while(i<k){
            mp[grid[i][j]]++;
            grid[i][j]=-1;
            i++;
            j++;
            s++;
        }
        i=0;
        j=n-1;
        while(j>k){
            mp[grid[i][j]]++;
            grid[i][j]=-1;
            i++;
            j--;
            s++;
        }
        i=k;
        while(i<n){
            mp[grid[i][k]]++;
            grid[i][j]=-1;
            i++;
            s++;
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(grid[i][j]!=-1){
                    mps[grid[i][j]]++;
                }
            }
        }
        vector<pair<int,int>>v,vec;
        //priority_queue<pair<int,int>>pq,pqs;
        for(auto itr:mps){
           
            v.push_back({itr.second,itr.first});
        }
        for(auto itr:mp){ //cout<<itr.second<<" ";
            vec.push_back({itr.second,itr.first});
        }
        int p=INT_MAX;
        for(i=0;i<v.size();i++){
            for(j=0;j<vec.size();j++){
                k=v[i].first;
                l=v[i].second;
                m=vec[j].first;
                t=vec[j].second;
                //cout<<l<<" "<<t<<endl;
                if(l!=t){
                    p=min(p,( (n*n)-(k+m)));
                }
            }
        }
        if(p==INT_MAX){
            p=min(s,((n*n)-s));
        }
        return p;
    }
};