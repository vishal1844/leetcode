class Solution {
    int a[4]={-1,0,0,+1};
    int b[4]={0,+1,-1,0};
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int count=0;
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            int t=q.size();
            int mp=0;
            for(int i=0;i<t;i++){
                auto itr=q.front();
                q.pop();
                int k=itr.first;
                int l=itr.second;
                for(int p=0;p<4;p++){
                int newi=a[p]+k;
                int newj=b[p]+l;
                if(newi>=0&&newj>=0&&newi<n&&newj<m&&grid[newi][newj]==1){
                    mp=1;
                    grid[newi][newj]=2;
                    q.push({newi,newj});
                }
                }
            }
             if(mp==1){
                count++;
                }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return count;
    }
};