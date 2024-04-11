class Solution {
public:
    string removeKdigits(string num, int k) {
        int i,j,l,m,t=0;
        string st="";
        for(auto itr:num){
            if(st.size()==0&&itr!='0'){
                st+=itr;
            }
            else if(st.size()==0&&itr=='0')continue;
            else if(st.size()&&st.back()<=itr){
                st+=itr;
            }
            else{
                while(st.size()&&k&&st.back()>itr){
                    k--;
                    st.pop_back();
                }
                if(st.size()==0&&itr=='0')continue;
                else{
                    st+=itr;
                }
            }
        }
        while(st.size()&&k){
            st.pop_back();
            k--;
        }
        if(st.size()!=0)return st;
        return"0";
    }
};