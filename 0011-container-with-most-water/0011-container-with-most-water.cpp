class Solution {
public:
    int maxArea(vector<int>& height) {
        int i,j,k,l,m,t=0,maxi=0;
        i=0;
        j=height.size()-1;
        while(i<j){
            k=min(height[i],height[j]);
            l=j-i;
            maxi=max(maxi,k*l);
            if(height[i]<height[j]){
                i++;
            }
            else if(height[i]==height[j]){
                i++;
                j--;
            }
            else{
                j--;
            }
        }
        return maxi;
    }
};