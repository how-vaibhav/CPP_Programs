#include<iostream>
using namespace std;
class Cricket{
public:    
    string name;
    int runs;
    int avg;

Cricket(string name , int runs , int avg){   
   this-> name=name;
   this-> runs=runs; 
   this-> avg=avg;
}

void display(){    
    cout<<this->name<<"   "<<this->runs<<"   "<<this->avg<<endl<<endl;   
 }
};

int main(){
Cricket p1("Virat Kohli" , 25000 ,43);
p1.display();   // we have passed the value 32 as a parameter

Cricket (*p2)=&p1;
(*p2).name="abcd";  // You will notice a change in name of p1 as well as in p2 because of pointers
p1.display();
p2->display();// instead of (*p2).display() we use this
return 0;
}