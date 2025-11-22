#include<iostream>
using namespace std;

int main(){

//     int age = 24;         //4 byte
//     char letter = 'A';    //1 byte
//     float PI = 3.14f;     //4 byte
//     bool iscorrect = true ;   //1 byte

//     cout<<sizeof(age)<<"\n";
//     cout<<sizeof(letter)<<"\n";
//     cout<<sizeof(PI)<<"\n";
//     cout<<sizeof(iscorrect)<<"\n \n \n";


// ...........................................//Type casting 
//     double price = 444.4;
//     int p = (int)price;
//     cout<<p<<"\n \n \n";

// ..........................................//INPUT
//     int num ;
//     cout<<"Enter any number :\t";
//     cin>>num;
//     cout<<"You have entered :\t"<<num<<"\n \n \n";

//......................................... //calculator +,-,%,/

//  int a ,b ;
//  cout<<"Enter the two numbers : \n";
//  cin>>a>>b;

//  cout<<"Sum of A & B is "<<(a+b)<<".\n";
//  cout<<"Diffrence of A & B is "<<(a-b)<<".\n";
//  cout<<"Product of A & B is "<<(a*b)<<".\n";
//  cout<<"Division of A & B is "<<(b/a)<<".\n";
    

//....................................... //To check wheather the character is upper or lower case

// char letter ;
// cout<<"Enter the character : \n";
// cin>>letter;

// if('a'<=letter && letter<='z'){
//     cout<<"Character is lower case .";
// }
// else{
//    cout<<"Character is upper case.";
// }

// ........................................//check wheather number is prime or not 
// int n;
// cout<<"Enter Any Number :\n";
// cin>>n;
// bool isPrime = true;
//  for(int i=2 ; i*i<n ; i++){   ...... // creative way
//     if(n%i==0){ 
//         isPrime = false ;
//         break;
//     }
//  }
//  cout<<isPrime;

//...............................................//BACKWARD LOOP
// int n=4;


// for(int i=0 ; i<n ; i++){
//     for(int j=i+1 ; j>0 ; j--){
//             cout<<j<<" ";
//    }
//     cout<<"\n";
// }

//            ......................................... (PYRAMID)
//     1        
//    121
//   12321
//  1234321
int n=4;
for(int i=0;i<n;i++){

    //spaces
    for(int j=0 ; j<n-i-1 ;j++){
             cout<<" ";
    }

    //num1
    for(int j=1 ; j<=i+1 ; j++){
        cout<<j;
    }

    //num2
    for(int j=i ; j>0 ; j--){
        cout<<j;
    }
    cout<<"\n";
}


 

return 0;
}