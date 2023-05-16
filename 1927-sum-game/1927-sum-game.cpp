class Solution {
public:
    bool sumGame(string num) {
        int sum=0,t=0,k=0,i,l=0;
        int n=num.size();
        for(i=0;i<n/2;i++){
            if(num[i]!='?'){
                sum+=num[i]-'0';
            }
            else{
                t++;
            }
        }
        for(i=n/2;i<n;i++){
            if(num[i]!='?'){
                k+=num[i]-'0';
            }
            else{
                l++;
            }
        }
        if((t+l)%2==1)return true;
        cout<<sum<<" "<<k<<" ";
        if(l<t){
            int m=t-l;
            m=m/2;
            sum+=m*9;
        }
        else{
            int m=l-t;
            m=m/2;
            k+=m*9;
        }
        return (sum!=k);
        
        
        
        
    }
};