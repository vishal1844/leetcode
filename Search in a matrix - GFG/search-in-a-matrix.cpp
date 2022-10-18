//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	   // int i,j,k,l;
	   // for(i=0;i<N;i++){
	   //     for(j=0;j<M;j++){
	   //         if(X==mat[i][j]){
	   //             return 1;
	   //         }
	   //     }
	   // }
	   // return 0;
	    // your code here
	    //int search(vector <vector <int>> &mat,int i, int size, int X)
	    int i,j,k,l,m;
	    i=0,j=M-1;
	    while(i<N){
	        if(mat[i][j]==X){
	            return 1;
	        }
	        else if(mat[i][j]<X){
	            i++;
	        }
	        else{
	            j--;
	        }
	    }
	    return 0;
	}
	    
};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}
// } Driver Code Ends