class Solution {
public:
    vector<long long> countKConstraintSubstrings(string s, int k, vector<vector<int>>& queries) {
        int j=0;
        vector<int>v(s.size(),0);
        vector<long long>ans;
        int zeroes=0;
        int ones=0;
         vector<long long>prefix(s.size()+1,0);
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                zeroes++;
            }
            else{
                ones++;
            }
                while(j<s.size() && (zeroes>k&& ones >k)){
                    if(s[j]=='0'){
                        zeroes--;
                    }
                    else{
                        ones--;
                    }
                    j++;
                }
            v[i]=(i-j+1);
            prefix[i+1]=prefix[i]+v[i];
        }
        // vector<long long>prefix(s.size()+1,0);
        // for(int i=0;i<s.size();i++){
        //     prefix[i+1]=prefix[i]+v[i];
        // }
        for(auto itr:queries){
            int left=itr[0];
            int right=itr[1];
            int l=left;
            int r=right;
            while(left<=right){
                int mid=left+(right-left)/2;
                if(v[mid]>(mid-l+1)){
                    left=mid+1;
                }
                else{
                    right=mid-1;
                }
            }
            long long res=0;
            res+=(long long)(left-l)*(left-l+1)/2;
            res+=prefix[r+1]-prefix[left];
            // int t=1;
            // while(left<=right&&(v[left]>t)){
            //     res+=t;
            //     t++;
            //     left++;
            // }
            // res+=(prefix[right+1]-prefix[left]);
            ans.push_back(res);
        }
        return ans;

    }
};