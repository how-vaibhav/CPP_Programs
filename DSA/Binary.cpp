#include<iostream>
using namespace std;
   // Decimal to binary convertion
int main(){
int dec =5 ;
int ans=0;
int pow= 1;

while(dec > 0){
    int rem = dec%2;
     dec /= 2;
     ans += rem*pow;

     pow*=10;
}
cout<<ans;
    return 0;
}