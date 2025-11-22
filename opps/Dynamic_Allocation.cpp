#include<iostream>
using namespace std;

class Student{

public:
string name;
int roll;
int age;

Student(string n , int r , int a){
    name=n;
    roll=r;
    age=a;
}
void display(){
    cout<<name<<"  "<<roll<<"  "<<age<<endl;
}
};

int main(){
int *p1=new int(4); // stored in heep memory
int *p2=new int[21]();   //this curve bracket will give every element in the array value 0. If you want to change the value from 0 to any other value then use for loop
// for(int i=0 ; i<21 ; i++){
//    p2[i]=45;
// }

cout<<*p1<<endl;
cout<<p2[0]<<endl;

Student s1("avi" ,32 ,43);
Student* s2 = new Student("Ram" ,10 ,20);    // we use this offen as it is pass by refrence so when we pass it to the function the value is not going to be changed .Mostly use in linklist

s1.display();
s2->display();  //because it is object pointer thats why use * or -> to get the value.
return 0;
}