class ParkingSystem {
    unordered_map<int,int>check;
public:
    ParkingSystem(int big, int medium, int small) {
        check[1]=big;
        check[2]=medium;
        check[3]=small;
    }
    
    bool addCar(int carType) {
        if(check[carType]>0)
        {
            check[carType]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */