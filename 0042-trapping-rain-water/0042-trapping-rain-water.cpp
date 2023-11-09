class Solution {
public:
    int trap(vector<int>& h) {
        int l=0,r=h.size()-1,maxil=0,maxir=0,res=0;
        while(l<=r){
            if(h[l]<=h[r]){
                if(maxil<=h[l]){
                    maxil=h[l];
                }
                else{
                    res+=(maxil-h[l]);
                }
                l++;
            }
            else{
                if(maxir<=h[r]){
                    maxir=h[r];
                }
                else{
                    res+=(maxir-h[r]);
                }
                r--;
            }
        }
        return res;
    }
};