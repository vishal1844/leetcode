class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int mini=0,maxi=0,sum=0;
        for(auto itr:nums){
            sum+=itr;
            //maxi=max(0,sum);
           // cout<<sum<<" ";
            mini=min(mini,sum);
            maxi=max(maxi,sum);
        }
        //cout<<maxi<<" "<<mini<<endl;
        return maxi-mini;
    }
};