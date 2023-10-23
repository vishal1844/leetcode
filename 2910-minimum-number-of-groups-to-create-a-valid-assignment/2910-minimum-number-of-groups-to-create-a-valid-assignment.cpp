class Solution {
//     bool solve(int i,map<int,int>&mp){
//         int j,l,m,t=0,p;
//         for(auto itr:mp){
//             int k=itr.second;
//             j=k/i;
//             l=k%i;
//             m=k/(i+1);
//             p=k%(i+1);
            
//         }
//     }
public:
    int minGroupsForValidAssignment(vector<int>& nums) {
        int n=nums.size();
        int i,j,k,l,m,t=INT_MAX;
        map<int,int>mp;
        for(auto itr:nums){
            mp[itr]++;
            //t=(t,mp[itr]);
        }
      // cout<<t<<" ";
        for(auto itr:mp){
            t=min(t,itr.second);
        }
        int s=0;
        for(i=t+1;i>=0;i--){
            j=0;
            m=0;
            //cout<<i<<" ";
                for(auto itr:mp){
                    //cout<<m<<" ";
                    k=itr.second%i;
                    l=itr.second/i;
                    //cout<<l<<" ";
                    m+=l;
                  //  cout<<m<<" ";
                    if(k==0){
                        continue;
                    }
                    if(abs(k-i)>1){
                        if(k+l>=i-1){
                            m++;
                            continue;
                        }
                        j=1;
                        break;
                    }
                    else{
                         m++;
                    }
                }
                    
                    if(j==0){
                        //cout<<m<<" ";
                        return m;
                    }
                //return m;
        }
        return -1;
    }
};