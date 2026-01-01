#include<iostream>
using namespace std;

int total(int num){
int sum = 0 ,rem;
while(num != 0){
    rem = num % 10;
    sum += rem;
    num /= 10;
}
return sum;
}

int factorial(int n ){
int fact = 1;
    while(n!=0){
        fact *= n;
        n--;
          }
    return fact ; 
}

int main(){

// int num;
// cout<<"Enter any numbers : \n";
// cin>>num;
// cout<<total(num);

int n,r;
cout<<"Enter the value of n & r : \n";
cin>>n>>r;
int binomial = factorial(n)/(factorial(r)*factorial(n-r));
cout<<binomial;
    return 0;
}