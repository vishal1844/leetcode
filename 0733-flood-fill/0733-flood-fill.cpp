class Solution {
    int a[4]={-1,0,0,+1};
    int b[4]={0,-1,+1,0};
    void solve(int i,int j,vector<vector<int>>&visit,vector<vector<int>>&image,int color,int t){
        visit[i][j]=1;
        image[i][j]=color;
        for(int k=0;k<4;k++){
            int newi=a[k]+i;
            int newj=b[k]+j;
            if(newi>=0&&newj>=0&&newi<image.size()&&newj<image[0].size()&&!visit[newi][newj]&&image[newi][newj]==t){
                solve(newi,newj,visit,image,color,t);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        //image[sr][sc]=color;
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>visit(image.size(),vector<int>(image[0].size(),0));
        // queue<pair<int,int>>q;
        // q.push({sr,sc});
        // int t=image[sr][sc];
        // visit[sr][sc]=1;
        // while(!q.empty()){
        //     auto itr=q.front();
        //     q.pop();
        //     int k=itr.first;
        //     int l=itr.second;
        //     image[k][l]=color;
        //     for(int i=0;i<4;i++){
        //         int newi=k+a[i];
        //         int newj=l+b[i];
        //         if(newi>=0&&newj>=0&&newi<n&&newj<m&&!visit[newi][newj]&&image[newi][newj]==t){
        //             q.push({newi,newj});
        //             visit[newi][newj]=1;
        //         }
        //     }
        // }
        // return image;
        int t=image[sr][sc];
        solve(sr,sc,visit,image,color,t);
        return image;
    }
};