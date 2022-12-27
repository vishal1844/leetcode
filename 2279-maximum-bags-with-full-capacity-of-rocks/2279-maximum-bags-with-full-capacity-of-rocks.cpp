class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int add) {
        int i,j,k,l,m,t=0;
        vector<int>v;
        for(i=0;i<capacity.size();i++){
            k=capacity[i]-rocks[i];
            if(k==0)t++;
            else{
                v.push_back(k);
            }
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++){
            if(v[i]<=add){
                add=add-v[i];
                t++;
            }
            else{
                break;
            }
        }
        return t;
    }
};