class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans(boxes.length());
        int i,j,k,l,sum=0,cnt=0,res=0;
        for(i=0;i<boxes.size();i++){
            ans[i]+=res;
            cnt+=(boxes[i]=='1'?1:0);
            res+=cnt;
        }
        sum=0,res=0,cnt=0;
        for(i=boxes.size()-1;i>=0;i--){
            ans[i]+=res;
            cnt+=boxes[i]=='1'?1:0;
            res+=cnt;
        }
        return ans;
        
    }
};