class Solution {
public:
    string longestDupSubstring(string s) {
        long long int t=0;
        string_view str="";
        size_t l=1;
        size_t n=s.size();
        unordered_set<string_view>stt;
        size_t h=s.size()-1;
        while(l<=h){
            size_t mid=l+(h-l)/2;
            bool k=0;
            for(long long int i=0;i<n-mid+1;i++){
                // string st=s.substr(i,mid);
                // if(stt.count(st)){
                //     if(mid>t){
                //         t=mid;
                //         k=1;
                //         str=st;
                //         break;
                //     }
                // }
                // else{
                //     stt.insert(st);
                // }
                 const auto [it, inserted] = stt.emplace(s.data() + i, mid);
                if (!inserted)
                {
                    k = true;
                    str = *it;
                    break;   
                }
            }
            if(k){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
            stt.clear();
        }
        return {str.begin(),str.end()};
        
    }
};