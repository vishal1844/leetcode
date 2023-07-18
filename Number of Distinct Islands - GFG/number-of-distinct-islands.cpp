//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    int k=0,l=0;
    int a[4]={0,0,-1,+1};
    int b[4]={+1,-1,0,0};
    void dfs(int i,int j,int n,int m,vector<vector<int>>&visit,vector<vector<int>>&grid,vector<pair<int,int>>&v){
        v.push_back({i-k,j-l});
        visit[i][j]=1;
        for(int t=0;t<4;t++){
            int newi=a[t]+i;
            int newj=b[t]+j;
            if(newi>=0&&newj>=0&&newi<n&&newj<m&&!visit[newi][newj]&&grid[newi][newj]==1){
                dfs(newi,newj,n,m,visit,grid,v);
            }
        }
    }
  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n=grid.size();
        int m=grid[0].size();
        int i,j,t=0;
        set<vector<pair<int,int>>>st;
        vector<vector<int>>visit(n,vector<int>(m,0));
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(!visit[i][j]&&grid[i][j]){
                    k=i;
                    l=j;
                    vector<pair<int,int>>v;
                    dfs(i,j,n,m,visit,grid,v);
                    st.insert(v);
                }
            }
        }
        return st.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends