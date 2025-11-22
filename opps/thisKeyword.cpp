#include<iostream>
using namespace std;
class Cricket{
public:    
    string name;
    int runs;

Cricket(string name , int runs){   
   this-> name=name;
   this-> runs=runs; }


// Cricket(string n , int r){
//     name=n;
//     runs=r;
//  }
};

int main(){
Cricket p1("Virat Kohli" , 25000);
cout<<p1.name<<"   "<<p1.runs<<endl;
return 0;
}