class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int i,j,l,m,t=0;
        for(i=0;i<k-1;i++){
            colors.push_back(colors[i]);
        }
        int n=colors.size();
        l=colors[0];
        m=1;
        //cout<<n<<" ";
        for(i=1;i<n;i++){
            if(colors[i]^l){
                l=colors[i];
                m++;
            }
            else{
                //cout<<m<<" ";
                if(m>=k){
                    t+=m-k+1;
                }
                m=1;
                l=colors[i];
                //cout<<i<<" ";
            }
        }
        if(m>=k){
                    t+=m-k+1;
                }
        return t;
    }
};