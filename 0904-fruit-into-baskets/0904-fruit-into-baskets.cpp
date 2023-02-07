class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i,j=0,k,l,m=0,t=0;
        unordered_map<int,int>mp;
        if(fruits.size()==1){
            return 1;
        }
        for(i=0;i<2;i++){
            mp[fruits[i]]++;
            t++;
        }
        m=max(m,2);
        for(i=2;i<fruits.size();i++){
            t++;
            mp[fruits[i]]++;
            if(mp.size()<=2){
                m=max(m,t);
            }
            else{
                while(mp.size()>2){
                    mp[fruits[j]]--;
                    t--;
                    if(mp[fruits[j]]==0){
                        mp.erase(fruits[j]);
                    }
                    j++;
                }
            }
        }
        return m;
        
    }
};