//getters and setters
#include<iostream>
using namespace std;
class Student{
    string name;
    int roll;
public:
    int school_code ;
    int pin_code;

 void set(string n, int r){  //setter function
        this->name=n;
        this->roll=r;
    }  

string getName(){   //getter function
    return name ;
  }
};

int main(){
Student s1;
s1.set("vaibhav" ,32);
cout<<s1.getName();
    return 0;
}