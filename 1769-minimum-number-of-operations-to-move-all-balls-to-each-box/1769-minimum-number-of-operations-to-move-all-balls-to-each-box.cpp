class Solution {
public:
    vector<int> minOperations(string boxes) {
        int sum=0;
        vector<int>ind;
        for(int i=0;i<boxes.size();i++){
            if(boxes[i]=='1')
            ind.push_back(i);
        }
        vector<int>v;
        for(int i=0;i<boxes.size();i++){
            sum=0;
            for(auto itr:ind){
                sum+=abs(i-itr);
            }
            v.push_back(sum);
        }
        return v;
    }
};