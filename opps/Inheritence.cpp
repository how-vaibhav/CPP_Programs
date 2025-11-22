#include<iostream>
using namespace std;
class Vehicle { 
    int cost ;
};

class Scooty{
public:
    int avg;
    int maxSpeed;
};

// it is also the example of multiple inheritense
class Bike : public Scooty , public Vehicle{   // : -> is extends here . Also bike is now child class or derived class
public:
    int gear;
};


int main(){
    Bike b1;
    b1.avg=32;
    cout<<b1.avg;
    return 0;
}