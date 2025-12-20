#include<iostream>
#include<vector>
using namespace std;

bool checkPrime(int num){
    for(int i=2 ;i*i<=num ; i++){
        if(num%i == 0) return false;
    }
    return false;
}
int main(){
int x=17;
vector<bool> isprime(x+1,true);
for(int i=0 ; i<x ; i++){

}
}