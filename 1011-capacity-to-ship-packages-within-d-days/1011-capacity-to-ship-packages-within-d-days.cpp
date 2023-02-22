class Solution { 
    private:
    bool solve(int mid,vector<int>&w,int d){
        int c=1;
        int total=0;
        for(auto itr: w){ 
             if(itr>mid) 
                 return 0;
            if((total+itr)<=mid){
                total+=itr;
            }
            else{
                c++;
                total=itr;
            }
        }
        return (c<=d);
    }
public:
    int shipWithinDays(vector<int>& w, int days) {
        int total=0;
        for(auto itr: w) 
            total+=itr;
        int low=1;
        int high=total; 
        int ans=0;
        // sort(w.begin(),w.end());
        while(low<=high){
            int mid=(low+high)>>1;
            if(solve(mid,w,days)){
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return ans;
        
    }
};