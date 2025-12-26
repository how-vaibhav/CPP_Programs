#include<iostream>
using namespace std;

int rec(int n){
    if(n==0) return 0;
    cout<<n<<endl;
    return rec(n-1);
}

int main(){
    int x=5;
    rec(x);
}