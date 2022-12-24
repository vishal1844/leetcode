class cmp {
public:
    bool operator()(pair<int,int>&a,pair<int,int>&b){
    if(a.first==b.first){
        return a.second>b.second;
    }
    else
        return a.first<b.first; 
}
};

class Solution {
public:
    vector<int> topStudents(vector<string>& pos, vector<string>& neg, vector<string>& report, vector<int>& id, int k) {
        unordered_set<string>st,str;
        long long int i,j,l,m,t=0;
       priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
        string stk,a;
        for(i=0;i<pos.size();i++){
            st.insert(pos[i]);
        }
        for(i=0;i<neg.size();i++){
            str.insert(neg[i]);
        }
        for(i=0;i<report.size();i++){
            stk=report[i];
            t=0;
            a="";
            for(j=0;j<stk.size();j++){
                if(stk[j]==' '){
                    if(st.count(a)){
                        t+=3;
                    }
                    if(str.count(a)){t-=1;}
                    a="";
                }
                else{a+=stk[j];}
            }
            if(st.count(a)){
                        t+=3;
                    }
                    if(str.count(a)){t-=1;}
            pq.push({t,id[i]});
        }
        vector<int>v;
        while(k--){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};