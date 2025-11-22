#include<iostream>
using namespace std;

//Normal function not bound to class
class Car{
public:
int speed;
int mileage;

};
void show(Car c ){       // pass by value
    cout<<"Speed of the car is : "<<c.speed <<endl
        <<"Mileage of the car is : "<<c.mileage<<endl;
}

void change(Car &c){   //pass by refrence 
    c.speed=32;
}
int main(){
Car c1;
c1.speed=12;
c1.mileage=43;
show(c1);
change(c1);
show(c1);



    return 0;
}