#include<iostream>
using namespace std;

class Student{
int a;
public:
Student(int b) : a(b){}  //constructor

int get(Student x){
    return x.a;
}
};

int main(){
Student obj(34);
cout<<obj.get(obj);
return 0;
}