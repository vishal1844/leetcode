class Solution {
    static bool cmp(vector<int>&a,vector<int>&b){
        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        if(a[0]>b[0]&&a[1]>b[1])return true;
        return a[1]>b[1];
    }
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        int i,j,k,l,m,t=0;
        for(i=0;i<boxTypes.size();i++){
            if(boxTypes[i][0]<=truckSize){
                t+=(boxTypes[i][0]*boxTypes[i][1]);
                truckSize-=boxTypes[i][0];
            }
            else{
                t+=(truckSize*boxTypes[i][1]);
                return t;
            }
        }
        return t;
        
        
    }
};