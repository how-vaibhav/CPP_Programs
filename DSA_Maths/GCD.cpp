#include<iostream>
using namespace std;

int main(){
int a ,b;
  cout<<"Enter two number to find there GCD : "<<endl;
  cin>>a>>b;
    if(a==0){
        cout<<"GCD = "<<b;
        return 0;
    }
    if(b==0){
        cout<<"GCD = "<<a;
        return 0;
    }
    if(a==b){
        cout<<"GCD = "<<a;       //Either of the numbers can be GCD
        return 0;
    }
int gcd ;  

for(int i=1 ; i<=min(a,b) ;i++){
    if(a%i==0 && b%i==0)
       gcd=i;
}
cout<<"GCD ="<<gcd;
return 0;
}