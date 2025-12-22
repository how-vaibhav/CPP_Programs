#include<iostream>
using namespace std;

//we know a*b = Gcd*Lcm

int Gcd(int a , int b){
if(b==0)return a;
return Gcd(b,a%b);
}

int Lcm(int a , int b){
return (a*b)/Gcd(a,b);
}

int main(){
    int a,b;
    cout<<"Enter the numbers : "<<endl;
    cin>>a>>b;
    int lcm;
    cout<<"lcm is "<<Lcm(a,b);
}