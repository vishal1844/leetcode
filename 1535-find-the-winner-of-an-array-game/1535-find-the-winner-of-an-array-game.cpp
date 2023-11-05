class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int i,j,l=arr[0],m,t=0;
        int n=arr.size();
        for(i=1;i<n;i++){
            if(l>arr[i]){
                t++;
                if(t==k)return l;
            }
            else{
                if(t==k)return l;
                t=1;
                l=arr[i];
            }
        }
        // if(i==n)return l;
        // t=1;
        // l=arr[i];
        // i++;
        // for(;i<n;i++){
        //     if(l>arr[i]){
        //         t++;
        //         if(t==k) return l;
        //     }
        //     else{
        //         if(t==k)return l;
        //         t=1;
        //         l=arr[i];
        //     }
        // }
        return l;
    }
};