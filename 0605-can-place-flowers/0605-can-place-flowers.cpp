class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i,j,k,l,m,t=0;
        if(n==0){
            return true;
        }
        if(flowerbed.size()==1&&n==1&&flowerbed[flowerbed.size()-1]==0){
            return true;
        }
        for(i=0;i<flowerbed.size();i+=2){
            if(i==0){
                if(flowerbed[i]==0&&flowerbed[i+1]==0){
                    t++;
                    //cout<<t<<" ";
                    flowerbed[i]=1;
                }
            }
            // else if(i==flowerbed.size()-2&&flowerbed[i]==0&&flowerbed[i+1]==0){
            //     t++;
            //     //cout<<t<<" ";
            //     flowerbed[i+1]=1;
            // }
            else if(i==flowerbed.size()-1&&flowerbed[i-1]==0&&flowerbed[i]==0){
                t++;
                 //cout<<t<<" ";
                flowerbed[i]=1;
            }
             else if(i==flowerbed.size()-2&&flowerbed[i]==0&&flowerbed[i+1]==0){
                t++;
                //cout<<t<<" ";
                flowerbed[i+1]=1;
            }
            else if(flowerbed[i-1]==0&&flowerbed[i]==0&&flowerbed[i+1]==0){
                t++;
                //cout<<t<<" ";
                flowerbed[i]=1;
            }
            if(t==n){
                //ut<<t<<endl;
                return true;
            }
        }
        //if(t==n)return true;
        return false;
    }
};