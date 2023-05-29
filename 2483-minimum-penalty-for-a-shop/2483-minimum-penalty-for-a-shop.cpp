class Solution {
public:
    int bestClosingTime(string customers) {
        int count=0,res=0,mini=0,i,j;
        for(i=0;i<customers.size();i++){
            if(customers[i]=='Y'){
                count++;
            }
            else{
                count--;
            }
            if(mini<count){
                mini=count;
                res=i+1;
            }
        }
        return res;
    }
};