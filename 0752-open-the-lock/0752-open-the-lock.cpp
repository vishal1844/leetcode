class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        int i,j,k,l,m,t=0;
        unordered_set<string>st(deadends.begin(),deadends.end());
        unordered_set<string>visited;
        queue<pair<string,int>>q;
        if(st.count("0000")){
            return -1;
        }
        q.push({"0000",0});
        string a,b;
        visited.insert("0000");
        while(!q.empty()){
            auto itr=q.front();
            q.pop();
            string s=itr.first;
            k=itr.second;
            if(s==target)return k;
            for(i=0;i<4;i++){
                a=s;
                b=s;
                a[i]=(a[i]-'0'+1)%10+'0';
                b[i]=(b[i]-'0'+10-1)%10+'0';
                //cout<<a<<" "<<b<<" ";
                if(!visited.count(a)&&!st.count(a)){
                    visited.insert(a);
                    q.push({a,k+1});
                }
                if(!visited.count(b)&&!st.count(b)){
                    visited.insert(b);
                    q.push({b,k+1});
                }
            }
        }
        return -1;
        
    }
};