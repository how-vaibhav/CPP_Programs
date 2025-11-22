#include<iostream>
using namespace std;
class Number{
int val;
public:
Number(int v=7){
val=v;
}

int operator+(const Number &n1){
Number ans;
ans.val += n1.val;
return ans.val; 
 }
 void display(){
    cout<<val;
 }
};

int main(){
Number n;
Number m(43);
Number result=n+m;
result.display();
return 0;
}

