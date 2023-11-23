class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>v;
        int i,j,k,m,t=0;
        for(j=0;j<l.size();j++){
            vector<int>vec(nums.begin()+l[j],nums.begin()+r[j]+1);
            sort(vec.begin(),vec.end());
            // for(auto itr:vec){
            //     cout<<itr<<" "; 
            // }
            // cout<<endl;
            if(vec.size()<=2){
                v.push_back(1);
                //cout<<"K";
                continue;
            }
            t=vec[1]-vec[0];
           // cout<<t<<" ";
            m=0;
            for(i=2;i<vec.size();i++){
                k=vec[i]-vec[i-1];
                if(t!=k){
                    //cout<<k<<" ";
                    m=1;
                    v.push_back(0);
                    break;
                }
            }
            if(m==0){
                v.push_back(1);
            }
        }
        return v;
    }
};