class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int>s;
        int i,j,k,l,max=INT_MIN,t,c=0;
        int n=nums.size();
        for(i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        if(s.size()<=2){
             l=*max_element(nums.begin(),nums.end());
        return l;
        }
        for(i=1;i<=3;i++){
            max=INT_MIN;
            for(auto itr:s){
                if(max<itr)
                    max=itr;
            }
            c++;
            if(c!=3){
            s.erase(max);
            }
            if(c==3)
                return max; 
        }
        return-1 ;
        
    }
};