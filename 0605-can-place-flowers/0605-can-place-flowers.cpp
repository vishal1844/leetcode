class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0){
            return true;
        }
        if(flowerbed.size()==1&&n==1&&flowerbed[0]==0){
            return true;
        }
        int i,j,k,l,m,t=0;
        for(i=0;i<flowerbed.size();i+=2){
            if(i==0){
                if(flowerbed[i]==0&&flowerbed[i+1]==0){
                flowerbed[i]=1;
                t++;
                }
            }
            else if(i==flowerbed.size()-1&&flowerbed[i-1]==0&&flowerbed[i]==0){
                flowerbed[i]=1;
                t++;
            }
            else if(flowerbed[i-1]==0&&flowerbed[i]==0&&flowerbed[i+1]==0){
                flowerbed[i]=1;
                t++;
            }
            if(t==n){
                return true;
            }
        }
        if(flowerbed.size()%2==0){
            if(flowerbed[i-2]==0&&flowerbed[i-1]==0){
                t++;
            }
        }
        if(t==n){
            return true;
        }
        return false;
        
    }
};