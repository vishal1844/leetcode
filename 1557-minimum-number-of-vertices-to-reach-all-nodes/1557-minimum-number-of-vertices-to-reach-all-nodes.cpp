class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool>incomingedge(n,0);
        for(vector<int>&edge:edges){
            incomingedge[edge[1]]=true;
        }
        vector<int>requirednodes;
        for(int i=0;i<n;i++){
            if(!incomingedge[i]){
                requirednodes.push_back(i);
            }
        }
        return requirednodes;
    }
};