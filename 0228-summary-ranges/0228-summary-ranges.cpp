class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int i,j=0,k,l,m,t=0,s;
        string str="";
        vector<string>v{};
        if(nums.size()==0){
            return v;
        }
        for(i=0;i<nums.size()-1;i++){
            if((nums[i]+1)!=nums[i+1]){
                if(i==j){
                    str=to_string(nums[i]);
                    v.push_back(str);
                    j=j+1;
                }
                else{
                    str=to_string(nums[j])+"->"+to_string(nums[i]);
                    v.push_back(str);
                    j=i+1;
                }
            }
            else{
                continue;
            }
        }
        if(j==i){
            str=to_string(nums[i]);
            v.push_back(str);   
        }
        else{
            str=to_string(nums[j])+"->"+to_string(nums[i]);
                    v.push_back(str);    
        }
        return v;
    }
};