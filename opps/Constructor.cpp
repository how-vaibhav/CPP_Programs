#include<iostream>
using namespace std;

class Student{

public:
string name;
int roll;
int age;

Student(){ }   //Default Constructor if you dont make one . Also now you can initialize values like s1.name ="hello" ; inside main function

Student(string n , int r , int a){  //parametrized constructor
     name=n;
     roll=r;
     age=a;
  }

  //You can make multiple constructors if you want which will help in giving you multiple ways to initialize the data members
Student(string n , int r ){  //This only has two parameters
     name=n;
     roll=r;
   
  }
};


int main(){
Student s1("Avi" , 43 , 40);  // Constructor call

cout<<s1.name <<endl
    <<s1.age<<endl
    <<s1.roll<<endl<<endl;

//when we are making a constuctor then we cannot initialize the value like this and to 
//do that we have to make default constuctor
 //Student s2;
 //s2.name="dvd";

Student s3;
//If you don't initialize the constructor you will get the garbage value
s3.age=100;  
s3.name="Dhiraj";
s3.roll=76;
cout<<s3.name <<endl
    <<s3.age<<endl
    <<s3.roll<<endl<<endl;

Student s4("Raj" , 43);
cout<<s4.name <<endl
    <<s4.age<<endl   // as age is not initialize in s4 so it will give a garbage value
    <<s4.roll<<endl<<endl;    


Student s5=s1;     // deep copy : means the changes to the s1 will not effect the s5 as the shallow copy is not created istead deep copy is created 
cout<<s5.name <<endl
    <<s5.age<<endl
    <<s5.roll<<endl<<endl;

Student s6(s3);     //Another way of creating a deep copy     
cout<<s6.name <<endl
    <<s6.age<<endl
    <<s6.roll<<endl<<endl;

    return 0;
}


//..................CONSTRUCTOR OVERLOADING..................

// class Box {
// private:
//     int length;
// public:
//     Box() : length(0) {}          // default
//     Box(int l) : length(l) {}     // parameterized
//     Box(const Box &b) {           // copy
//         length = b.length;
//     }
// };
