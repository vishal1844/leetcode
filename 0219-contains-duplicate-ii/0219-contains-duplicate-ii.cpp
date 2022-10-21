class Solution {
public:
    // bool containsNearbyDuplicate(vector<int>& nums, int k) {
    //     int i,j,t,l,s;
    //     for(i=0;i<nums.size()-1;i++){
    //         for(j=i+1;j<nums.size();j++){
    //             if(nums[i]==nums[j]){
    //                 if(abs(i-j)<=k){
    //                 return true;}
    //             }
    //         }
    //     }
    //        return false;
    // }
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       unordered_map<int, int>m;
        for(int i=0; i<nums.size(); i++){
           // if(m.count(nums[i])){
            if(m.find(nums[i])!=m.end()){
                int diff=abs(m[nums[i]]-i);
                //cout<<m[nums[i]]<<endl;
                if(diff<=k) return true;
                
            }
          m[nums[i]]=i;
        }
      return false;
    }
};