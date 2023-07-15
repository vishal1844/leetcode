class Solution {
    int a[4]={0,0,-1,1};
    int b[4]={1,-1,0,0};
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>visit(n,vector<int>(m,0));
        vector<vector<int>>ans(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    visit[i][j]=1;
                    ans[i][j]=0;
                }
            }
        }
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                auto itr=q.front();
                q.pop();
                int k=itr.first.first;
                int l=itr.first.second;
                int p=itr.second;
                for(int t=0;t<4;t++){
                    int newi=k+a[t];
                    int newj=l+b[t];
                    if(newi>=0&&newj>=0&&newi<n&&newj<m&&!visit[newi][newj]){
                        visit[newi][newj]=1;
                        q.push({{newi,newj},p+1});
                        ans[newi][newj]=p+1;
                        //cout<<newi<<" "<<newj<<" "<<p+1<<endl;
                    }
                }
            }
        }
        return ans;
        
    }
};