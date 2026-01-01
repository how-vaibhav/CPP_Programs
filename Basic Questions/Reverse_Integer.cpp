#include<iostream>
using namespace std;

int main(){
int num = 1234;
int temp = 0;

while(num != 0){
  int rem = num%10;
  temp = temp*10 + rem; 
  num /= 10;
}
    cout<<temp;
    return 0;
}