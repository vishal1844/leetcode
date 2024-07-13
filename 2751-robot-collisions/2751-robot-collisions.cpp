class Solution {
    static bool comp(vector<int>&a,vector<int>&b){
        return a[3]<b[3];
    }
public:
    vector<int> survivedRobotsHealths(vector<int>& p, vector<int>& h, string d) {
        vector<vector<int>>v;
        int i,j,k,l,m,t=0;
        for(i=0;i<p.size();i++){
            v.push_back({p[i],h[i],d[i],i});
        }
        sort(v.begin(),v.end());
        vector<vector<int>>st;
        for(auto itr:v){
            int pos=itr[0];
            int health=itr[1];
            int dir=itr[2];
            int ind=itr[3];
            if(st.empty()||dir=='R'){
                st.push_back(itr);
            }
            else{
                int flag=1;
                while(!st.empty()&&flag&&st.back()[2]=='R'){
                    if(st.back()[1]==health){
                        flag=0;
                        st.pop_back();
                    }
                    else if(st.back()[1]>health){
                        st.back()[1]--;
                        flag=0;
                    }
                    else{
                        health--;
                        st.pop_back();
                    }
                }
                if(flag==1){
                    st.push_back({pos,health,dir,ind});
                }
            }
        }
        sort(st.begin(),st.end(),comp);
        vector<int>ans;
        for(auto itr:st){
            ans.push_back(itr[1]);
        }
        return ans;
    }
};