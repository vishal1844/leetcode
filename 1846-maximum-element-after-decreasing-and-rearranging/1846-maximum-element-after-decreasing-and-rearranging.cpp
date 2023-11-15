class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
       // cout<<n<<" ";
        int i,k,j,l,t=0;
        arr[0]=1;
        j=1;
        for(i=1;i<arr.size();i++){
            if(abs(arr[i]-arr[i-1])<=1){
                j=arr[i];
                continue;
            }
            else{
                j++;
                arr[i]=j;
               // cout<<arr[i]<<" ";
            }
        }
        return arr[arr.size()-1];
    }
};