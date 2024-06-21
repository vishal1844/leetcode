class Solution {
    int solve(vector<int>&position,int m,int mid){
        int i,j,k,l,t=0;
        k=position[0];
        m--;
        for(i=1;i<position.size();i++){
            if(position[i]-k>=mid){
                m--;
                k=position[i];
            }
            if(m<=0)return 1;
        }
        return 0;
    }
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int i,j,k,l,t=0;
        l=1;
        int h=position.back()-position.front();
       // if(m==2)return h;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(solve(position,m,mid)){
                t=mid;
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        return t;
    }
};