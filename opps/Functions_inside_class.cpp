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

void display(int runs){     //to avoid change of runs of player you should use this keyword.
    cout<<this->name<<"   "<<this->runs<<"   "<<this->avg<<endl;   
    cout<<runs;
}

};

int main(){
Cricket p1("Virat Kohli" , 25000 ,43);
p1.display(32);   // we have passed the value 32 as a parameter
return 0;
}