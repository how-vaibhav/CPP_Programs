#include<iostream>
using namespace std;

void printFibo(int n, int a = 0, int b = 1){
    if(n == 0)
        return;

    cout << a << " ";
    printFibo(n - 1, b, a + b);
}

int main(){
    int n = 13;
    printFibo(n);
    return 0;
}
