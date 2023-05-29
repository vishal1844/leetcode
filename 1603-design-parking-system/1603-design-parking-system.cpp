class ParkingSystem {
    int i,j,k;
public:
    ParkingSystem(int big, int medium, int small) {
        i=big;
        j=medium;
        k=small;
    }
    
    bool addCar(int carType) {
        if(carType==1){
            if(i>0){
                i--;
                return true;
            }
            return false;
        }
        if(carType==2){
            if(j>0){
                j--;
                return true;
            }
            return false;
        }
        else{
            if(k>0){
                k--;
                return true;
            }
            return false;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */