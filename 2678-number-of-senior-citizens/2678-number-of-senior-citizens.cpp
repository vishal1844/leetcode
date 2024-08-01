class Solution {
public:
    int countSeniors(vector<string>& details) {
        int m=0;
        for(auto itr:details){
        string str=itr.substr(11,2);
        int t=stoi(str);
        if(t>60){
            m++;
        }
    }
    return m;
    }
};