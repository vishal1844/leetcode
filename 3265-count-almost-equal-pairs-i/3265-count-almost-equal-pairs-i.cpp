class Solution {
public:
    int countPairs(vector<int>& nums) {
        int n=nums.size();
        int i,j,k,l,m,t=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                string s,str;
                s=to_string(nums[i]);
                str=to_string(nums[j]);
                l=max(s.size(),str.size());
                s=string(l-s.size(),'0')+s;
                str=string(l-str.size(),'0')+str;
               // cout<<s<<" "<<str<<" ";
                string r=s,q=str;
                sort(r.begin(),r.end());
                sort(q.begin(),q.end());
                if(r!=q)continue;
                m=0;
                int p=0;
                for(k=0;k<l;k++){
                    if(s[k]!=str[k]){
                        p++;
                    }
                    if(p>2){
                        m=1;
                        break;
                    }
                }
                if(m==0&&(p%2==0)){
                    t++;
                }
            }
        }
        return t;
        
    }
};