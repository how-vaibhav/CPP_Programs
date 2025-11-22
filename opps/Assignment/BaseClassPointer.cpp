#include<iostream>
using namespace std;

class Base{
 public:
    void show(){ cout<<"Parent";}  // if you use virtual keyword then the show() of child will get executed 

};
class Derived : public Base {
 public:
    void show(){ cout<<"Children";}
};

int main(){
    Base *ptr;  // pointer pointing to base class 
    Derived p;
    ptr = &p;
    ptr -> show();
    
    return 0;
}