class Solution {
public:
    int minOperations(vector<int>& nums) {
       // sort(nums.begin(),nums.end());
        map<int,int>mp;
        int i,j,k,l,m,t=0;
        for(i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto itr:mp){
            if(itr.second<=1)return -1;
            else if(itr.second==2)t+=1;
            // else if(itr.second%2==1){
            //     k=itr.second/3;
            //     t+=k;
            //     if(itr.second%3!=0)
            //     //t+=k;
            //     t++;
            // }
            else{
                k=itr.second/3;
                t+=k;
                if(itr.second%3!=0)
                t++;
            }
        }
        return t;
    }
};