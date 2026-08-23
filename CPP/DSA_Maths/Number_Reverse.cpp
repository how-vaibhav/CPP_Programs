#include<iostream>
#include<climits>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    int revNum = 0;

    while(num>0){
        if(revNum > INT_MAX/10 || revNum < INT_MIN /10) return -1;
         revNum *= 10 ;
         revNum += num%10;
         num /= 10;
    }
    cout<<"Reversed NUmber is "<<revNum;
    return 0;
}
